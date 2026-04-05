#include "include/VariationalAnsatz.h"
#include <algorithm>

VariationalAnsatz::VariationalAnsatz(size_t n_qubits, size_t n_layers)
    : n_qubits(n_qubits), n_layers(n_layers) {}

QCircuit VariationalAnsatz::build_circuit(const std::vector<double>& theta) {
    auto qvm = initQuantumMachine(CPU);
    auto qubits = qvm->allocateQubits(n_qubits);
    QCircuit circuit;

    size_t param_idx = 0;
    for (size_t layer = 0; layer < n_layers; layer++) {
        for (size_t i = 0; i < n_qubits; i++) {
            circuit << Ry(qubits[i], theta[param_idx++]);
            circuit << Rz(qubits[i], theta[param_idx++]);
        }
        for (size_t i = 0; i < n_qubits - 1; i++) {
            circuit << CNOT(qubits[i], qubits[i+1]);
        }
    }

    return circuit;
}

std::vector<std::vector<double>> VariationalAnsatz::initialize_centroids(size_t k, size_t params_per_centroid) {
    std::vector<std::vector<double>> centroids(k);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0, 2 * M_PI);

    for (auto& c : centroids) {
        c.resize(params_per_centroid);
        std::generate(c.begin(), c.end(),  { return dis(gen); });
    }

    return centroids;
}