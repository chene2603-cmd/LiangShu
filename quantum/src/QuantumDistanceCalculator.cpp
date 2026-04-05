#include "include/QuantumDistanceCalculator.h"

QCircuit QuantumDistanceCalculator::build_swap_test(Qubit* ancilla, const QVec& q1, const QVec& q2) {
    QCircuit c;
    c << H(ancilla);
    for (size_t i = 0; i < q1.size(); i++) {
        c << CNOT(ancilla, q1[i]);
        c << CNOT(q2[i], q1[i]);
        c << CNOT(ancilla, q1[i]);
    }
    c << H(ancilla);
    return c;
}

double QuantumDistanceCalculator::calculate_distance(
    const std::vector<double>& data_point,
    const std::vector<double>& centroid_params,
    const DataEncoder& encoder,
    const VariationalAnsatz& ansatz
) {
    size_t total = 2 * encoder.n_qubits + 1;
    auto qvm = initQuantumMachine(CPU);
    auto qubits = qvm->allocateQubits(total);

    QVec data_q(qubits.begin(), qubits.begin() + encoder.n_qubits);
    QVec cent_q(qubits.begin() + encoder.n_qubits, qubits.begin() + 2*encoder.n_qubits);
    Qubit* ancilla = qubits.back();

    QProg prog;
    prog << encoder.angle_encoding(data_point);
    prog << ansatz.build_circuit(centroid_params);
    prog << build_swap_test(ancilla, data_q, cent_q);

    double prob0 = qvm->getProbability(ancilla);
    double overlap = sqrt(2.0 * prob0 - 1.0);
    return 1.0 - overlap * overlap;
}