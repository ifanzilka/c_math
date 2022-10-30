#include "c_math.h"
#include <stdio.h>

/*
** long double c_exp(double x)
** @ x -> степень
** return возвращает (e^x)
*/

/* 
** Formula
** lim (1 + x/n)^n  :  (1 + x/ 1) :: (1 + x / 2)^2  :: (1 + x / 3) ^3 ...
** n ->>inf
*/

/* 
** Formula
** SUM = 1 + x + x^2/2!+ x^3/3! 
** n ->>inf
*/


long double c_exp(double x)
{
    long double result = 1;
    long double summary = 1;
    long double i = 1;
    int flag = 0;
    
    if (x < 0)
    {
        x *= -1;
        flag = 1;
    }

    /* До нужной нам точности */
    while (c_fabs(result) > 1e-5)
    {
        result = result * (x / i); // 1 * (x / 1) :: temp = x; res= (x)*x/2  x^2/2;  res = x^2/2 * x /3  x^3/6 ...
        i = i + 1;
        summary = summary + result;
        if (summary > MAX_LONG_DOUBLE)
        {
            summary = C_INF;
            break;
        }
    }


     if (flag == 1)
     {
        if (summary > MAX_LONG_DOUBLE)
            summary = 0;
        else
            summary = 1./summary;
    }
    return summary > MAX_LONG_DOUBLE ? C_INF : summary ;
}


// long double c_exp(double x) {
//     long double ret = 1, tmp = 1;
//     long double i = 1;
//     int flag_sign = 0;

//     if (x < 0) {
//         x *= -1;
//         flag_sign = 1;
//     }

//     while (c_fabs(tmp) > EPSILON / 10) {
//         tmp *= x / i;
//         i += 1;
//         ret += tmp;
//         if (ret > MAX_DOUBLE) {
//             ret = C_INF;
//             break;
//         }
//     }

//     if (flag_sign == 1) {
//     if (ret > MAX_DOUBLE) {
//       ret = 0;
//     } else {
//       ret = 1. / ret;
//     }
//   }
//   if (ret > MAX_DOUBLE) {
//     return C_INF;
//   }

//     return ret ;
// }