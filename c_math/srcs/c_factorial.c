#include "c_math.h"

/*
**
**
**
*/


int c_factorial(int num)
{
    int variable;
    
    variable = 1;
    for (int i = 1; i <= num;i++)
    {
        variable = variable * i;
    }
    return (variable);
}