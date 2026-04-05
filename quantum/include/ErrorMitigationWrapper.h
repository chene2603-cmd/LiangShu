#pragma once
#include "QPanda.h"
#include <vector>

class ErrorMitigationWrapper {
public:
    static QProg apply_zero_noise_extrapolation(QProg& circuit, double scale);
    static std::vector<double> apply_readout_error_correction(
        const std::vector<double>& raw,
        const QMatrixXd& calib
    );
};