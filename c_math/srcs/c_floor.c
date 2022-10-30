#include "c_math.h"

/*
**
** возвращает ближайшее целое число, не превышающее заданное значения
**
*/


long double c_floor(double x)
{
    return (x == (long long int)x) ? x :(x > 0) ? (long double)(((long long int)x)) :(x < 0) ? (long double)((long long int)x) - 1 : 0;
}