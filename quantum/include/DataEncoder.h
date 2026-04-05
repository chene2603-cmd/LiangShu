#pragma once
#include "QPanda.h"
#include <vector>

class DataEncoder {
private:
    size_t n_qubits;
    size_t data_dim;

public:
    DataEncoder(size_t n_qubits, size_t data_dim);

    QCircuit angle_encoding(const std::vector<double>& data);
    QCircuit amplitude_encoding(const std::vector<double>& data);
};