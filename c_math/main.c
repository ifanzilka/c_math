#include "include/c_math.h"
#include <stdio.h>
#include <math.h>

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
    double a = 1.5;
    printf("cos(%lf) = %Lf\n", a, c_cos(a));

    a = 1;
    printf("cos(%lf) = %Lf\n", a, c_cos(a));

}

void tes_tan()
{
    double a = 1.5;
    printf("c_tan(%lf) = %Lf\n", a, c_tan(a));
    printf("tan(%f) = %f\n", a, tan(a));

    a = 1;
    printf("c_tan(%lf) = %Lf\n", a, c_tan(a));
    printf("tan(%f) = %f\n", a, tan(a));
}

void tes_sqrt()
{
    double a = 1.5;
    printf("c_sqrt(%lf) = %Lf\n", a, c_sqrt(a));
    printf("sqrt(%f) = %f\n", a, sqrt(a));

    a = 1;
    printf("c_sqrt(%lf) = %Lf\n", a, c_sqrt(a));
    printf("sqrt(%f) = %f\n", a, sqrt(a));

    a = 405;
    printf("c_sqrt(%lf) = %Lf\n", a, c_sqrt(a));
    printf("sqrt(%f) = %f\n", a, sqrt(a));
}


void tes_atan()
{

    double a = 1.5;
    double res_orig;
    double res_my;


    a = 1;
    printf("c_atan(%lf) = %Lf\n", a, c_atan(a));
    printf("atan(%f) = %f\n", a, atan(a));

    a = 0.5;
    printf("c_atan(%lf) = %Lf\n", a, c_atan(a));
    printf("atan(%f) = %f\n", a, atan(a));

    a = -1;
    printf("c_atan(%lf) = %Lf\n", a, c_atan(a));
    printf("atan(%f) = %f\n", a, atan(a));

    a = -0.5;
    printf("c_atan(%lf) = %Lf\n", a, c_atan(a));
    printf("atan(%f) = %f\n", a, atan(a));

    a = 1.7;
    printf("c_atan(%lf) = %Lf\n", a, c_atan(a));
    printf("atan(%f) = %f\n", a, atan(a));
    
}


void tes_asin()
{

    double a = 1.5;
    double res_orig;
    double res_my;


    // a = 1;
    // printf("c_asin(%lf) = %Lf\n", a, c_asin(a));
    // printf("asin(%f) = %f\n", a, asin(a));

    a = 0.5;
    printf("c_asin(%lf) = %Lf\n", a, c_asin(a));
    printf("asin(%f) = %f\n", a, asin(a));

    a = -1;
    printf("c_asin(%lf) = %Lf\n", a, c_asin(a));
    printf("asin(%f) = %f\n", a, asin(a));

    a = -0.5;
    printf("c_asin(%lf) = %Lf\n", a, c_asin(a));
    printf("asin(%f) = %f\n", a, asin(a));

    a = -0.5;
    printf("c_asin(%lf) = %Lf\n", a, c_asin(a));
    printf("asin(%f) = %f\n", a, asin(a));
    
}


void tes_acos()
{

    double a = 1.5;
    double res_orig;
    double res_my;


    // a = 1;
    // printf("c_asin(%lf) = %Lf\n", a, c_asin(a));
    // printf("asin(%f) = %f\n", a, asin(a));

    a = 0.5;
    printf("c_acos(%lf) = %Lf\n", a, c_acos(a));
    printf("acos(%f) = %f\n", a, acos(a));

    a = -1;
    printf("c_acos(%lf) = %Lf\n", a, c_acos(a));
    printf("acos(%f) = %f\n", a, acos(a));

    a = -0.5;
    printf("c_acos(%lf) = %Lf\n", a, c_acos(a));
    printf("acos(%f) = %f\n", a, acos(a));

    a = 1;
    printf("c_acos(%lf) = %Lf\n", a, c_acos(a));
    printf("acos(%f) = %f\n", a, acos(a));
    
}


void tes_log()
{

    double a = 1.5;
    double res_orig;
    double res_my;


    // a = 1;
    // printf("c_asin(%lf) = %Lf\n", a, c_asin(a));
    // printf("asin(%f) = %f\n", a, asin(a));

    a = 0.5;
    printf("c_log(%lf) = %Lf\n", a, c_log(a));
    printf("log(%f) = %f\n", a, log(a));

    a = -1;
    printf("c_log(%lf) = %Lf\n", a, c_log(a));
    printf("log(%f) = %f\n", a, log(a));

    a = -0.5;
    printf("c_log(%lf) = %Lf\n", a, c_log(a));
    printf("log(%f) = %f\n", a, log(a));

    a = 1;
    printf("c_log(%lf) = %Lf\n", a, c_log(a));
    printf("log(%f) = %f\n", a, log(a));


    a = 2.7;
    printf("c_log(%lf) = %Lf\n", a, c_log(a));
    printf("log(%f) = %f\n", a, log(a));

    a = 10;
    printf("c_log(%lf) = %Lf\n", a, c_log(a));
    printf("log(%f) = %f\n", a, log(a));


    a = 100;
    printf("c_log(%lf) = %Lf\n", a, c_log(a));
    printf("log(%f) = %f\n", a, log(a));


    a = 1000;
    printf("c_log(%lf) = %Lf\n", a, c_log(a));
    printf("log(%f) = %f\n", a, log(a));
    
}


// void tes_acos()
// {

//     double a = 1.5;
//     double res_orig;
//     double res_my;


//     // a = 1;
//     // printf("c_asin(%lf) = %Lf\n", a, c_asin(a));
//     // printf("asin(%f) = %f\n", a, asin(a));

//     a = 0.5;
//     printf("c_acos(%lf) = %Lf\n", a, c_acos(a));
//     printf("acos(%f) = %f\n", a, acos(a));

//     a = -1;
//     printf("c_acos(%lf) = %Lf\n", a, c_acos(a));
//     printf("acos(%f) = %f\n", a, acos(a));

//     a = -0.5;
//     printf("c_acos(%lf) = %Lf\n", a, c_acos(a));
//     printf("acos(%f) = %f\n", a, acos(a));

//     a = 1;
//     printf("c_acos(%lf) = %Lf\n", a, c_acos(a));
//     printf("acos(%f) = %f\n", a, acos(a));
    
// }


void tes_pow()
{

    double a = 1.5;
    double b;
    double res_orig;
    double res_my;


    // a = 1;
    // printf("c_asin(%lf) = %Lf\n", a, c_asin(a));
    // printf("asin(%f) = %f\n", a, asin(a));

    a = 2;
    b = 10;
    printf("c_pow(%lf, %lf) = %Lf\n", a, b, c_pow(a, b));
    printf("pow(%f, %lf) = %f\n", a, b,  pow(a,b));

    a = 3;
    b = 2;
    printf("c_pow(%lf, %lf) = %Lf\n", a, b, c_pow(a, b));
    printf("pow(%f, %lf) = %f\n", a, b,  pow(a,b));


    a = 15;
    b = 2;
    printf("c_pow(%lf, %lf) = %Lf\n", a, b, c_pow(a, b));
    printf("pow(%f, %lf) = %f\n", a, b,  pow(a,b));
    
}


int main()
{
    test_exp();
    test_sin();
    test_cos();
    tes_tan();
    tes_sqrt();
    tes_atan();
    tes_asin();
    tes_acos();
    tes_log();
    tes_pow();



    return (0);
}