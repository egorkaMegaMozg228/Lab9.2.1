#include <iostream>
#include "math_macros.h"
#include "input_output.h"

int main() {
    double x, y, z, w;

    getInput(x, y, z);

#if defined(USE_MAX)
    if (z == 1) {
        w = MAX(POW(x-y,2), ABS(y-x));
    }
#elif defined(USE_MIN)
    if (z != 1) {
        w = MIN(x+POW(y,2), z+POW(x,2));
    }
#else
    
    if (z == 1) {
        w = MAX(POW(x - y, 2), ABS(y - x));
    }
    else {
        w = MIN(x + POW(y, 2), z + POW(x, 2));
    }
    
#endif

    displayResult(w);

    return 0;
}
