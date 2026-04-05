#include "include/DataEncoder.h"
#include <cassert>

DataEncoder::DataEncoder(size_t n_qubits, size_t data_dim)
    : n_qubits(n_qubits), data_dim(data_dim) {}

QCircuit DataEncoder::angle_encoding(const std::vector<double>& data) {
    auto qvm = initQuantumMachine(CPU);
    auto qubits = qvm->allocateQubits(n_qubits);
    QCircuit circuit;

    assert(data.size() <= n_qubits);

    for (size_t i = 0; i < data.size(); i++) {
        circuit << Ry(qubits[i], data[i]);
    }

    return circuit;
}

QCircuit DataEncoder::amplitude_encoding(const std::vector<double>& data) {
    throw std::runtime_error("Amplitude encoding requires more qubits");
}