#include "c_math.h"

/*
**
** asin
**
*/


long double c_asin(double x)
{
    double asin = x;
    double t = x;
    int n = 1;
    
    if (x > 1 || x < -1)
        return C_NAN;

    if (x == 1)
    {   
        asin = C_M_PI_2;
    }
    else if (x == -1)
    {
        asin = -C_M_PI_2;
    }
    else
    {
        while (c_fabs(t) > EPSILON )
        {
            t = ((t) * (x * x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));
            asin = asin + t;
            n++;
        }
    }
    return (asin);
}