#include "c_math.h"

/*
**
** 
**
*/

long double c_sqrt(double x)
{
    double  res = 1;
    int     sign = 1;
    int     iter = 0;

    if (x < 0)
    {
        sign = -1;
        res = C_NAN;
    }
    else
    {
        res = x;
        while (iter < ITER_MATH)
        {
            res = 0.5 * (res  + x / res);
            iter++;
        }

    }
    return (res * sign);
}