#include <calculator_operations.h>
#include "stat_invest.h"
#include <conversion.h>
#include "trignometry.h"

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by use
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
//<<<<<<< HEAD
int calculator_operand1 = 0;
int calculator_operand2 = 0;
int calculator_operation;
//=======
//float calculator_operand1 = 0;
//float calculator_operand2 = 0;
//>>>>>>> 2bee00454dda1b81f225873c06c62219de9e19ba

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, EXIT=20};

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
//=======
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5.Statistics\n6.Investment\n7.conversion\n8.Trignometry\n9.Differentiation\n10.BMI\n20. Exit\n");
//>>>>>>> 2bee00454dda1b81f225873c06c62219de9e19ba
    printf("\n\tEnter your choice\n");
    scanf("%d", &calculator_operation);

    if(calculator_operation==EXIT)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tStarting Operation\n");

    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\tEnter two numbers\n");
            scanf("%d %d",&calculator_operand1,&calculator_operand2);
            printf("The result is=%d",add(calculator_operand1, calculator_operand2));
            break;
        case SUBTRACT:
            printf("\n\tEnter two numbers\n");
            scanf("%d %d",&calculator_operand1,&calculator_operand2);
            printf("The result is=%d",subtract(calculator_operand1, calculator_operand2));
            break;
        case MULTIPLY:
            printf("\n\tEnter two numbers\n");
            scanf("%d %d",&calculator_operand1,&calculator_operand2);
            printf("The result is=%d",multiply(calculator_operand1, calculator_operand2));
            break;
        case DIVIDE:
            printf("\n\tEnter two numbers\n");
            scanf("%d %d",&calculator_operand1,&calculator_operand2);
            printf("The result is=%d",divide(calculator_operand1, calculator_operand2));
            break;
        case 5:
            stat();
            break;
        case 6:
            invest();
            break;
        case 7:
            conversion();
            break;
        case 8:
            trig();
            break;
        case 9:
            diff();
            break;
        case 10:
            printf("\n\tEnter weight and height\n");
            scanf("%d %d",&calculator_operand1,&calculator_operand2);
            printf("The result is=%d",bmi(calculator_operand1, calculator_operand2));
            break;
        case 20:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    // Check if the operation is a valid operation 
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}