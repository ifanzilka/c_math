#include "c_math.h"

/*
**
** acos
**
*/


long double c_acos(double x)
{
    long double res = 0.;

    if (0. <= x && x <= 1.)
    {
        res = c_atan(c_sqrt(1 - x * x) / x);
    }
    else if (-1. <= x && x <= 0.)
    {
        res = C_PI + c_atan(c_sqrt(1 - x * x) / x);
    }
    else
    {
        res = C_NAN;
    }
    return (res);
}