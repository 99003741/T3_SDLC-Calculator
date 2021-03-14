#include <calculator_operations.h>
#include <math.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

int add(int operand1, int operand2)
{ 
  
  return operand1 + operand2;
    
}

int subtract(int operand1, int operand2)
{ 
    
return operand1 - operand2;
    
}

int multiply(int operand1, int operand2)
{ 
    return operand1 * operand2;
    
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int bmi(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    return operand1 /(operand2  *  operand2);
}