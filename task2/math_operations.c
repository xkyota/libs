#include "print_operations.h" 
#include <math.h> 

int result; 
double d_result; 

int add(int a, int b)
{ 
    result = a + b; 

    return result;
}

int subtract(int a, int b) 
{
    result = a - b; 

    return result;
}

int divide(int a, int b) 
{ 
    d_result = (double)a / (double)b;
    d_result = round(d_result);

    return (int)d_result;
}

int multiply(int a, int b)
{ 

    result = a * b; 

    return result;
}