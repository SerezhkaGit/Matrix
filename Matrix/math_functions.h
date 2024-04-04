#ifndef MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H

#include <cmath>

namespace MathFunctions {
    double sine(double x) {
        return sin(x);
    }

    double cosine(double x) {
        return cos(x);
    }

    double tangent(double x) {
        return tan(x);
    }

    double cotangent(double x) {
        return 1 / tan(x);
    }

    double power(double base, double exponent) {
        return pow(base, exponent);
    }
}

#endif
