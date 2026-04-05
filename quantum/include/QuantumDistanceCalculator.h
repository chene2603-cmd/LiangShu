#pragma once
#include "QPanda.h"
#include "DataEncoder.h"
#include "VariationalAnsatz.h"
#include <vector>

class QuantumDistanceCalculator {
private:
    QCircuit build_swap_test(Qubit* ancilla, const QVec& q1, const QVec& q2);

public:
    double calculate_distance(
        const std::vector<double>& data_point,
        const std::vector<double>& centroid_params,
        const DataEncoder& encoder,
        const VariationalAnsatz& ansatz
    );
};