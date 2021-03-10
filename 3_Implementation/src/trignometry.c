#include "trignometry.h"

int trig()
{

 	double degree;

 	printf("Enter your angle value in degree : ");
 	scanf("%lf",&degree);

 	double radian = degree * (3.81/180);

     int x ;
     printf("Enter the function :");
     scanf("%d",&x);

   switch (x)
   {
       case 1: printf("sin value is %lf \n",sin(radian));
               break;
       case 2: printf("cos value is %lf \n",cos(radian));
                break;
       case 3: printf("tan value is %lf \n",tan(radian));
               break;
       default: printf("Choice other than 1, 2 and 3");
                break;
   }
   return 0;


}
