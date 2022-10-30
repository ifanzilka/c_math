#include "c_math.h"

/*
**
** atan
**
*/


// long double c_atan(double x)
// {
//     long double summary = x;
//     long double num = 3;
//     long double p = -(x * x * x);
//     long double variable = 1;
        

//     if (c_fabs(x) <= 1)
//     {
//         while (c_fabs(variable) > 1e-7)
//         {
//             variable = p / num;
//             summary += variable;

//             p *= (-1) * x * x;
//             num += 2;
//         }
//     }
//     else
//     {
//         return (C_NAN);
//     }
//     return (summary);
// }


long double c_atan(double x)
{
    long double atan = c_asin((x) / (c_sqrt(1 + x * x)));
    
    return (atan);
}