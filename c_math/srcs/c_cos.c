#include "c_math.h"

/*
**
** sin(x) = 1 - x^2/2! +  x^4/4!
**
*/


long double c_cos(double x)
{
    long double summary = 1;
    long double p = -(x * x);
    long double fact = 2;
    long double variable = 1;
    int         num_fact = 2;

    while (c_fabs(variable) > EPSILON)
    {
        variable = p / fact;
        summary += variable;
        p *= (-1) * x * x;
        fact *= (num_fact + 1) * (num_fact + 2);//2,4,6...
        num_fact += 2;
    }
    return (summary);
}