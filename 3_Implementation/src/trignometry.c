
#include<stdio.h>
#include<math.h>
int trig()
{

 	double degree;

 	printf("Enter your angle value in degree : ");
 	scanf("%lf",&degree);

 	double radian = degree * (M_PI/180);

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
