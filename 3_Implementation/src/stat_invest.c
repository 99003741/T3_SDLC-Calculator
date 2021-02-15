#include "stat_invest.h"
void invest()
{

printf("Enter principal amount (p): ");
scanf("%lf", &p);
printf("Enter time in year (t): ");
scanf("%lf", &t);
printf("Enter rate in percent (r): ");
scanf("%lf", &r);


    int choice;
    printf("enter choice\n1.Simple Interest\n2.Compound Interest\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
            simple_interest(p, t, r);
            break;
    case 2:
            compound_interest(p, t, r);
            break;
    default: printf("Error\n");
    }
//return(0);
}

double simple_interest(double pr, double ti, double ra)
{
    si = (pr * ti * ra)/100.0;     /* Calculating simple interest */
    printf("Simple Interest = %0.3f\n", si);
}

double compound_interest(double pr, double ti, double ra)
{
    ci = pr * (pow(1+ra/100, ti) - 1); /* Calculating compound interest */
    printf("Compound Interest = %0.3f", ci);
}


//investment program
void stat()
{
    int i;
    double input[100];
    int choice;

    printf("enter choice\n1.Mean\n2.Median\n3.Mode\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
            printf("Enter Array Length\n");
            scanf("%d",&length);
            printf("\nEnter array\n");
            for(i=0;i<length;i++)
            {

                scanf("%lf",&input[i]);
            }
            meann(input);
            break;
    case 2:
            printf("Enter Array Length\n");
            scanf("%d",&length);
            printf("\nEnter array\n");
            for(i=0;i<length;i++)
            {

                scanf("%lf",&input[i]);
            }
            //mediann(input);
            break;
    case 3:
            printf("Enter Array Length\n");
            scanf("%d",&length);
            printf("\nEnter array\n");
            for(i=0;i<length;i++)
            {

                scanf("%lf",&input[i]);
            }
            modee(input);
            break;


    }
}

double meann(double array[100])
{
 double mean,sum=0;
 int i;
 for(i=0;i<length;i++)
 {
     sum+=array[i];
 }
 mean=sum/length;
 printf("mean is %lf\n",mean);
 return mean;
}
double modee(double array[1000])
{
    double mode;
    int i,j,count,count1=1;
    for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }

        }
        if(count>count1)
        {

            count1=count;
            mode=array[i];
        }
    }
    printf("Mode : %lf", mode);

}
