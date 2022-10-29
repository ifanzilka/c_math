#include "c_math.h"

/*
**
** sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
**
*/


long double c_sin(double x)
{
    long double summary = 0;
    long double p = x;
    long double fact = 1;

    for (int i = 0; c_fabs(p / fact) > EPSILON; i++)
    {
        summary += p / fact;
        p *= (-1) * x * x;
        fact *= (2 * (i + 1)) * (2 * (i + 1) + 1);
    }
    return (summary);
}