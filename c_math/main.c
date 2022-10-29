#include "include/c_math.h"
#include <stdio.h>


void test_exp()
{
    double a = -10;

    printf("%Lf\n", c_exp(a));

}

void test_sin()
{
    double a = 0.5;
    printf("sin(%lf) = %Lf\n", a, c_sin(a));
    a = 1;
    printf("sin(%lf) = %Lf\n", a, c_sin(a));

}

void test_cos()
{
    double a = 0.5;
    printf("cos(%lf) = %Lf\n", a, c_cos(a));

    a = 1;
    printf("cos(%lf) = %Lf\n", a, c_cos(a));

}

int main()
{
    test_exp();
    test_sin();
    test_cos();



    return (0);
}