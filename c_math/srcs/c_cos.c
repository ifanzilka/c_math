#include "c_math.h"

/*
**
** sin(x) = 1 - x^2/2! +  x^2/4!
**
*/


// long double c_cos(double x)
// {
//     long double summary = 1;
//     long double p = -(x * x);
//     long double fact = 2;
//     long double variable = 1;

//     while (c_fabs(variable) > EPSILON)
//     {
//         variable = p / fact;
//         summary += variable;
//         p = (-1) * p * p;
//         fact = fact * (fact + 1) * (fact + 2);//2,4,6...
//     }
//     return (summary);
// }