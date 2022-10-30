#include "c_math.h"

/*
**
**  // остаток операции деления с плавающей точкой
**
*/


long double c_fmod(double base, double exp)
{
    long double res = base;
    int flag_minus = 0;
    
    if (res < 0)
    {  // x < 0
        flag_minus = 1;
        res = c_fabs(res);
    }
    if (exp == 0)
    {
        res = C_INF;
    }
    else
    {
        if (res != exp)
        {
            while (c_fabs(res) >= c_fabs(exp))
                res = c_fabs(res) - c_fabs(exp);
        }
        else
        {
            res = 0.0;
        }
    }
    return (flag_minus) ? -res : res;
}