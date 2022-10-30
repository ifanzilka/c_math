#include "c_math.h"

/*
**
** tan = sin/cos
**
*/


long double c_tan(double x)
{
    return (c_sin(x) / c_cos(x));
}