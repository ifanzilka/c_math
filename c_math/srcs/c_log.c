#include "c_math.h"

/*
**
** вычисляет натуральный логарифм
** ln(x) по основанию e
*/


long double c_log(double x)
{
    long double res = 0;
    long double arg = 1;
    int exp_pow = 0;
    int i = 0;

    if (x == C_INF)
    {
        res = C_INF;
    }
    else if (x <= 0)
    {
        res = -C_NAN;
    }
    else if (x == 1)
    {
        res = 0;
    }
    else
    {
        for (; x >= EXPONENT; x /= EXPONENT, exp_pow++) continue;
        
        while (i < ITER_MATH)///(c_fabs((arg)) > 1e-25) 
        {
            arg = res;
            res = arg + 2 * (x - c_exp(arg)) / (x + c_exp(arg));
            i++;
        }

    }
    return (res + exp_pow);
}