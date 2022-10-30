#ifndef C_MATH_H
# define C_MATH_H

#ifndef EPSILON 
# define EPSILON 1e-17
#endif

#ifndef ITER_MATH
# define ITER_MATH 1000
# endif

#define C_INF 1.0 / 0.0
#define C_NAN 0.0 / 0.0



#ifndef COLOR
# define COLOR

# define F_NONE		"\033[37m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define CYANE		"\033[36m"
# define WHITE		"\033[1m"
# define YELLOW	    "\033[0;33m"
# define BLUE		"\033[34m" 
# define PURPLE     "\033[0;35m"

/* 
** Bold font  
** param [1; in range [1, 4]
*/
# define B_GRAY      "\033[1;30m"
# define B_WHITE     "\033[1;37m"
# define B_RED       "\033[1;31m"
# define B_YELLOW    "\033[1;33m"
# define B_GREEN     "\033[1;32m"
# define B_CYAN      "\033[1;36m"
# define B_BLUE      "\033[1;34m"
# define B_PURPLE    "\033[1;35m"

#endif


#define C_PI            3.14159265358979323846264338327950288 /* Pi */
#define C_M_PI_2        1.57079632679489661923  /* pi/2 */
#define EXPONENT        2.7182818284590452354  /* e */
#define MAX_LONG_DOUBLE 1.79769313486231571e+308
#define MAX_DOUBLE      1.79769313486231571e+308


int         c_factorial(int num);
int         c_abs(int x);
long double c_fabs(double x);
long double c_sin(double x);
long double c_cos(double x);
long double c_tan(double x);
long double c_atan(double x);
long double c_acos(double x);
long double c_asin(double x);
long double c_sqrt(double x);
long double c_exp(double x);
long double c_ceil(double x);
long double c_floor(double x);
long double c_log(double x);
long double c_pow(double base, double exp);
long double c_fmod(double x, double y);

#endif