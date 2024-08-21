#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForestRegressor {
                public:
                    /**
                    * Predict class for features vector
                    */
                    float predict(float *x) {
                        float y_pred = 0;
                        // tree #1
                        if (x[2] <= 1012.0) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #2
                        if (x[2] <= 1012.0) {
                            y_pred += 15.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #3
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #4
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #5
                        if (x[2] <= 1011.5) {
                            y_pred += 15.0;
                        }

                        else {
                            if (x[2] <= 1013.0) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #6
                        if (x[1] <= 82.5) {
                            y_pred += 0.0;
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #7
                        if (x[2] <= 1012.0) {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #8
                        if (x[2] <= 1011.5) {
                            y_pred += 15.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #9
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #10
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[0] <= 28.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #11
                        if (x[2] <= 1011.5) {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #12
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #13
                        if (x[2] <= 1012.0) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #14
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[0] <= 28.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #15
                        if (x[2] <= 1012.5) {
                            y_pred += 5.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #16
                        if (x[1] <= 72.5) {
                            if (x[0] <= 27.5) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        else {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        // tree #17
                        if (x[1] <= 82.5) {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #18
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #19
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[1] <= 75.0) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #20
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[0] <= 28.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #21
                        if (x[1] <= 72.5) {
                            if (x[2] <= 1013.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        // tree #22
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #23
                        if (x[1] <= 82.5) {
                            y_pred += 0.0;
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #24
                        if (x[1] <= 72.5) {
                            if (x[0] <= 28.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        else {
                            y_pred += 20.0;
                        }

                        // tree #25
                        if (x[2] <= 1012.0) {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #26
                        if (x[0] <= 27.0) {
                            y_pred += 0.0;
                        }

                        else {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        // tree #27
                        if (x[2] <= 1012.5) {
                            y_pred += 5.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #28
                        if (x[2] <= 1012.0) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #29
                        if (x[0] <= 29.5) {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[0] <= 30.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #30
                        if (x[1] <= 82.5) {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #31
                        if (x[2] <= 1011.5) {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #32
                        if (x[2] <= 1011.5) {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #33
                        if (x[2] <= 1011.5) {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[0] <= 28.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #34
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #35
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #36
                        if (x[2] <= 1011.5) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #37
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1013.0) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #38
                        if (x[1] <= 72.5) {
                            if (x[1] <= 60.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        else {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        // tree #39
                        if (x[1] <= 77.5) {
                            if (x[1] <= 65.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #40
                        if (x[1] <= 82.5) {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #41
                        if (x[2] <= 1011.5) {
                            y_pred += 15.0;
                        }

                        else {
                            if (x[0] <= 28.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #42
                        if (x[2] <= 1011.5) {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[1] <= 60.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #43
                        if (x[0] <= 27.0) {
                            y_pred += 0.0;
                        }

                        else {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        // tree #44
                        if (x[2] <= 1012.0) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #45
                        if (x[2] <= 1011.5) {
                            y_pred += 15.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #46
                        if (x[2] <= 1010.5) {
                            y_pred += 20.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #47
                        if (x[1] <= 72.5) {
                            if (x[0] <= 27.5) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        else {
                            y_pred += 20.0;
                        }

                        // tree #48
                        if (x[0] <= 27.5) {
                            y_pred += 0.0;
                        }

                        else {
                            y_pred += 20.0;
                        }

                        // tree #49
                        if (x[2] <= 1013.0) {
                            y_pred += 5.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #50
                        if (x[2] <= 1011.5) {
                            y_pred += 15.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #51
                        if (x[2] <= 1012.0) {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #52
                        if (x[1] <= 67.5) {
                            y_pred += 0.0;
                        }

                        else {
                            y_pred += 20.0;
                        }

                        // tree #53
                        if (x[0] <= 28.0) {
                            y_pred += 0.0;
                        }

                        else {
                            y_pred += 5.0;
                        }

                        // tree #54
                        if (x[2] <= 1011.5) {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[1] <= 65.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #55
                        if (x[2] <= 1011.5) {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #56
                        if (x[2] <= 1012.0) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #57
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[0] <= 28.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #58
                        if (x[1] <= 77.5) {
                            if (x[0] <= 28.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #59
                        if (x[0] <= 30.0) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #60
                        if (x[1] <= 82.5) {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #61
                        if (x[1] <= 72.5) {
                            if (x[2] <= 1013.0) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            y_pred += 20.0;
                        }

                        // tree #62
                        if (x[2] <= 1012.5) {
                            y_pred += 5.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #63
                        if (x[2] <= 1011.5) {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[1] <= 75.0) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #64
                        if (x[2] <= 1012.0) {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #65
                        if (x[2] <= 1011.5) {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #66
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #67
                        if (x[1] <= 82.5) {
                            y_pred += 0.0;
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #68
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #69
                        if (x[1] <= 72.5) {
                            if (x[1] <= 60.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        else {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        // tree #70
                        if (x[1] <= 67.5) {
                            y_pred += 0.0;
                        }

                        else {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        // tree #71
                        y_pred += 0.0;
                        // tree #72
                        if (x[1] <= 82.5) {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #73
                        if (x[1] <= 72.5) {
                            y_pred += 0.0;
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #74
                        if (x[1] <= 82.5) {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            y_pred += 15.0;
                        }

                        // tree #75
                        if (x[1] <= 72.5) {
                            if (x[2] <= 1013.0) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        // tree #76
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #77
                        if (x[1] <= 72.5) {
                            if (x[2] <= 1013.0) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        // tree #78
                        if (x[2] <= 1011.5) {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #79
                        if (x[2] <= 1011.5) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #80
                        if (x[1] <= 72.5) {
                            if (x[2] <= 1013.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        else {
                            y_pred += 20.0;
                        }

                        // tree #81
                        if (x[2] <= 1011.5) {
                            if (x[1] <= 80.0) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            if (x[1] <= 65.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #82
                        if (x[2] <= 1011.5) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #83
                        if (x[2] <= 1010.5) {
                            y_pred += 20.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #84
                        if (x[2] <= 1010.5) {
                            y_pred += 20.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #85
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #86
                        if (x[2] <= 1012.0) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #87
                        if (x[2] <= 1010.5) {
                            y_pred += 20.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #88
                        if (x[0] <= 29.5) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            if (x[0] <= 30.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #89
                        y_pred += 0.0;
                        // tree #90
                        if (x[0] <= 30.0) {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #91
                        if (x[1] <= 72.5) {
                            if (x[1] <= 65.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        else {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        // tree #92
                        if (x[2] <= 1012.5) {
                            y_pred += 5.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #93
                        if (x[0] <= 27.0) {
                            y_pred += 0.0;
                        }

                        else {
                            if (x[0] <= 28.5) {
                                y_pred += 15.0;
                            }

                            else {
                                y_pred += 20.0;
                            }
                        }

                        // tree #94
                        if (x[2] <= 1010.0) {
                            y_pred += 20.0;
                        }

                        else {
                            if (x[0] <= 28.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #95
                        if (x[2] <= 1012.5) {
                            y_pred += 5.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #96
                        if (x[2] <= 1011.5) {
                            y_pred += 15.0;
                        }

                        else {
                            if (x[0] <= 28.0) {
                                y_pred += 0.0;
                            }

                            else {
                                y_pred += 5.0;
                            }
                        }

                        // tree #97
                        if (x[2] <= 1011.5) {
                            y_pred += 15.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        // tree #98
                        if (x[2] <= 1010.5) {
                            y_pred += 20.0;
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #99
                        if (x[2] <= 1012.0) {
                            if (x[2] <= 1009.5) {
                                y_pred += 20.0;
                            }

                            else {
                                y_pred += 15.0;
                            }
                        }

                        else {
                            y_pred += 0.0;
                        }

                        // tree #100
                        if (x[2] <= 1011.5) {
                            y_pred += 15.0;
                        }

                        else {
                            if (x[2] <= 1012.5) {
                                y_pred += 5.0;
                            }

                            else {
                                y_pred += 0.0;
                            }
                        }

                        return y_pred / 100;
                    }

                protected:
                };
            }
        }
    }