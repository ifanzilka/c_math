#include "c_math.h"

/*
**
**  возводит число в заданную степень
**
*/

long double c_pow(double base, double y) // y = exp
{  
    long double result = 0;

    if (y == 0)
        result = 1.0L;
    else if (y > 0)
        result = c_exp(y * c_log(base));
    else
        result = 1 / (c_exp(-y * c_log(base)));
    return  (result);
}