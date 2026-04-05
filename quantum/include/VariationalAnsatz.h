#pragma once
#include "QPanda.h"
#include <vector>
#include <random>

class VariationalAnsatz {
private:
    size_t n_qubits;
    size_t n_layers;

public:
    VariationalAnsatz(size_t n_qubits, size_t n_layers = 2);

    QCircuit build_circuit(const std::vector<double>& theta);
    std::vector<std::vector<double>> initialize_centroids(size_t k, size_t params_per_centroid);
};