#ifndef C_MATH_H
# define C_MATH_H

#ifndef EPSILON 
# define EPSILON 1e-17
#endif

#ifndef ITER_MATH
# define ITER_MATH 100
# endif

#define C_INF 1.0 / 0.0
#define C_NAN 0.0 / 0.0




#define EXPONENT        2.7182818284590452354  /* e */
#define MAX_LONG_DOUBLE 1.79769313486231571e+308
#define MAX_DOUBLE      1.79769313486231571e+308


int         c_factorial(int num);
int         c_abs(int x);
long double c_sin(double x);
long double c_cos(double x);


long double c_tan(double x);
long double c_sqrt(double x);
long double c_acos(double x);
long double c_asin(double x);
long double c_atan(double x);
long double c_ceil(double x);
long double c_exp(double x);
long double c_fabs(double x);
long double c_floor(double x);
long double c_fmod(double x, double y);
long double c_log(double x);
long double c_pow(double base, double exp);


#endif