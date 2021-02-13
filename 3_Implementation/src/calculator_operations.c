#include <calculator_operations.h>

float add(int operand1, int operand2)
{
    return operand1 + operand2;
}

float subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

float multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

float divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}