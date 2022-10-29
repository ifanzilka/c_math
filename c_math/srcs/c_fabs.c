#include "c_math.h"

/*
**
**
**
*/


long double c_fabs(double x)
{
    if (x >= 0)
    {
        return (x);
    }
    else
    {
        return (-x);
    }
}