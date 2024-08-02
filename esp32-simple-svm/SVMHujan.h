#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class SVM {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float kernels[6] = { 0 };
                        float decisions[1] = { 0 };
                        int votes[2] = { 0 };
                        kernels[0] = compute_kernel(x,   18.0  , 82.0  , 7.0 );
                        kernels[1] = compute_kernel(x,   26.0  , 72.0  , 11.0 );
                        kernels[2] = compute_kernel(x,   22.0  , 78.0  , 6.0 );
                        kernels[3] = compute_kernel(x,   30.0  , 70.0  , 10.0 );
                        kernels[4] = compute_kernel(x,   20.0  , 80.0  , 8.0 );
                        kernels[5] = compute_kernel(x,   35.0  , 60.0  , 15.0 );
                        float decision = -46.44773986353;
                        decision = decision - ( + kernels[0] * -0.153016326732  + kernels[1] * -1.0  + kernels[2] * -0.447394109869 );
                        decision = decision - ( + kernels[3] * 0.383560423539  + kernels[4] * 1.0  + kernels[5] * 0.216850013062 );

                        return decision > 0 ? 0 : 1;
                    }

                protected:
                    /**
                    * Compute kernel between feature vector and support vector.
                    * Kernel type: linear
                    */
                    float compute_kernel(float *x, ...) {
                        va_list w;
                        va_start(w, 3);
                        float kernel = 0.0;

                        for (uint16_t i = 0; i < 3; i++) {
                            kernel += x[i] * va_arg(w, double);
                        }

                        return kernel;
                    }
                };
            }
        }
    }