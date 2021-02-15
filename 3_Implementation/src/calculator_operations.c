#include <calculator_operations.h>
#include <math.h>
#include<stdlib.h>
#include<stdio.h>

float add(float operand1, float operand2)
{ 
    if(isdigit(operand1) && isdigit(operand2))
{
  return operand1 + operand2;
}
else
{
  return 0;
}
    
}

float subtract(float operand1, float operand2)
{ 
    if(isdigit(operand1) && isdigit(operand2))
{
  return operand1 - operand2;
}
else
{
  return 0;
}
    
}

float multiply(float operand1, float operand2)
{ 
    if(isdigit(operand1) && isdigit(operand2))
{
  return operand1 * operand2;
}
else
{
  return 0;
}
    
}

float divide(float operand1, float operand2)
{
    if(0 == operand2)
        return 0;
    else if(isdigit(operand1) && isdigit(operand2))
        return operand1 / operand2;
    else
        return 0;
}

float bmi(float operand1, float operand2)
{
    if(0 == operand2)
        return 0;
    else if(isdigit(operand1) && isdigit(operand2))
        return operand1 / operand2* operand2;
    else
        return 0;
}