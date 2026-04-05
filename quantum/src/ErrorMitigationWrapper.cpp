#include "include/ErrorMitigationWrapper.h"
#include <Eigen/Core>

QProg ErrorMitigationWrapper::apply_zero_noise_extrapolation(QProg& base, double scale) {
    QProg out;
    out << base;
    if (scale > 1.0) {
        for (size_t i = 0; i < base.size(); i += 5) {
            out << I(base[i]);
        }
    }
    return out;
}

std::vector<double> ErrorMitigationWrapper::apply_readout_error_correction(
    const std::vector<double>& raw,
    const QMatrixXd& calib
) {
    Eigen::VectorXd v(raw.size());
    for (size_t i = 0; i < raw.size(); ++i) v[i] = raw[i];
    Eigen::VectorXd corr = calib.inverse() * v;

    std::vector<double> res(corr.size());
    for (size_t i = 0; i < corr.size(); ++i) {
        res[i] = std::max(0.0, corr[i]);
    }
    return res;
}