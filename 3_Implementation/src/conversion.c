#include <conversion.h>

int conversion()
{
    int P,n,z;
    float C, f, K, T, R, D, Pn, Currency;
    int num;

    printf("Choose the conversion option\n");   #type of conversion you need
    printf(" 1- numberic conversion\n");
    printf(" 2- Currency conversion \n");
    printf(" Enter the option: ");
    scanf("%d", &n);


    if(n==1)

    {
        
            #select the conversion of number you want
        
            printf("\n1.Decimal 2 Binary.");
            printf("\n2.Decimal 2 Octal.");
            printf("\n3.Decimal 2 Hexa.");
            printf("\n4.Binary 2 Octal.");
            printf("\n5.Binary 2 Hexa.");
            printf("\n6.Octal 2 Hexa.");
            printf("\n7.Exit.");
            printf("Please enter the option: ");
            scanf("%d", &P);


        switch(P)
         {


        case 1:
                printf("\nEnter any Decimal number:");   #function of the decimal to binary
                if(scanf("%d",&num)!=0 && num>0)
                D2B(num);  //calling functionelse

                break;




        case 2:

               printf("\nEnter any Decimal number:");#function of the decimal to octal
               if(scanf("%d",&num)!=0 && num>0)
               D2O(num);  //calling functionelse

                break;



        case 3:
               printf("\nEnter any Decimal number:");#function of the decimal to hexa 
               if(scanf("%d",&num)!=0 && num>0)
               D2H(num);  //calling functionelse

                break;



        case 4:
                printf("\nEnter any binary number:");
                if(scanf("%d",&num)!=0)// && (num==0 || num==1))
                B2O(B2D(num));  //calling functionelse
                break;

        case 5:
                printf("\nEnter any binary number:");
                if(scanf("%d",&num)!=0)// && (num==0 || num==1))
                B2H(B2D(num));  //calling functionelse
                break;

        case 6:

                     printf("\nEnter any Octal number:");
                    if(scanf("%d",&num)!=0)
                    D2H(O2D(num));  //calling functionelse
                break;
        case 7:
          //exit(0);
        default:
         printf("\nEnter proper Choice:");
         break;

        }
    }

else
    {
        #currency conversion 
        printf("<<<<   Currency conversion option   >>>>\n");
        printf("1:Convert rupees to US Dollars\n");
        printf("2:Convert US Dollars to rupees\n");
        printf("3.convert rupees to euro\n");
        printf("4.convert euro to rupees\n");
        printf("5.convert rupess to pound\n");
        printf("6.convert pound to rupess\n");
        printf("****************************************************\n\n");
        printf("How may i help You?\nEnter your choice:");
        printf("Please enter the option: ");
        scanf("%d", &z);

        switch(z)
        {

        case 1:
               printf("Enter amount in rupees:\n");#conversion of rupees into india
               scanf("%f",&f);
               india(f);
               break;
        case 2:
               printf("Enter  amount in dollar:\n");#conversion of dollar into india
               scanf("%f",&f);
               dollar(f);

                break;
        case 3:
               printf("Enter  amount in rupees:\n");#conversion of rupees into dollar
               scanf("%f",&f);
               rupees(f);


                break;
        case 4:
                printf("Enter  amount in euro:\n");
                scanf("%f",&f);
                euro(num);

                break;

        case 5:
                printf("Enter  amount in rupees:\n");
                scanf("%f",&num);
                indian_rupees(f);


                break;

        case 6:
              printf("Enter  amount in pound:\n");
              scanf("%f",&f);
              pound(f);
        case 7:
                printf("Thank You for using the currency converter\n");
                break;
                default:
                printf("please enter only numbers");


        }
    }
    return 0;
}
int D2B(int dec) //decimal to binary
{
  int bin=0,*bin_arr,count=0;
  while(dec>0)
   {
     bin=dec%2;
     dec/=2;
     *(bin_arr+count)=bin;
     count++;
   }
  printf("\nBINARY=");
  while(count > 0)
   {
    --count;
    printf("%d",*(bin_arr+count));
   }
  // return 0;
}

int D2O(int dec) //decimal to octal
{
  int oct=0,*oct_arr,count=0;
  while(dec>0)
   {
     oct=dec%8;
     dec/=8;
     *(oct_arr+count)=oct;
     count++;
   }
  printf("\nOCTAL=");
  while(count > 0)
   {
    --count;
    printf("%d",*(oct_arr+count));
   }
   return 0;
}

int D2H(int dec) //decimal to hexa
{
  int hexa=0,*hexa_arr,count=0;
  while(dec>0)
   {
     hexa=dec%16;
     dec/=16;
     *(hexa_arr+count)=hexa;
     count++;
   }
  printf("\nHEXA=");
  while(count > 0)
   {
    --count;
     switch(*(hexa_arr+count))
     {
       case 10:
            printf("A");
            break;
       case 11:
            printf("B");
            break;
       case 12:
            printf("C");
            break;
       case 13:
            printf("D");
            break;
       case 14:
            printf("E");break;
       case 15:
            printf("F");break;
       default:
            printf("%d",*(hexa_arr+count));
            break;
     }
       }
   return 0;
}

int B2D(int bin) //binary to decimal
{
   int *bin_arr,count=0,dec=0,mod,idx=0;
   while(bin!=0)
    {
     mod=bin%10;
     bin/=10;
     *(bin_arr+count)=mod;
     count++;
    }
  while(count>0)
   {
     --count;
     bin=*(bin_arr+idx);
     dec+=bin * (int)(pow(2,idx));
     idx++;
   }
  return dec;
}

int B2O(int dec)
{
  int oct=0,*oct_arr,count=0;
  while(dec>0)
   {
     oct=dec%8;
     dec/=8;
     *(oct_arr+count)=oct;
     count++;
   }
  printf("\nOCTAL=");
  while(count > 0)
   {
    --count;
    printf("%d",*(oct_arr+count));
   }
   return 0;
}
int B2H(int dec)
{
  int hexa=0,*hexa_arr,count=0;
  while(dec>0)
   {
     hexa=dec%16;
     dec/=16;
     *(hexa_arr+count)=hexa;
     count++;
   }
  printf("\nHEXA=");
  while(count > 0)
   {
    --count;
     switch(*(hexa_arr+count))
     {
       case 10:
            printf("A");
            break;
       case 11:
            printf("B");
            break;
       case 12:
            printf("C");
            break;
       case 13:
            printf("D");
            break;
       case 14:
            printf("E");break;
       case 15:
            printf("F");break;
       default:
            printf("%d",*(hexa_arr+count));
            break;
     }
       }
   return 0;
}

int O2D(int oct)
{
   int *dec_arr,count=0,dec=0,mod,idx=0;
   while(oct!=0)
    {
     mod=oct%10;
     oct/=10;
     *(dec_arr+count)=mod;
     count++;
    }
  while(count>0)
   {
     --count;
     oct=*(dec_arr+idx);
     dec+=oct * (int)(pow(8,idx));
     idx++;
   }
  return dec;

}

int india(float dollar)
{
    //int dollar;
   float convert;
    convert=dollar*72.707267;
    printf("The amount in US Dollars is USD %.2f",convert);
}
float dollar(float rupees)
{
    float b;
    b=rupees/72.707267;
   printf("The amount in india %.2f",b);
}
float rupees(float euro)
{
    float c;
    c=euro*88.147832;
    printf("The amount in india %.2f",c);
}
float euro(float rupees)
{
float d;
d=rupees/88;
 printf("The amount in india %.2f",d);
}
float indian_rupees(float pound)
{
    float e;
    e=pound*100;
    printf("The amount in india %.2f",e);
}
float pound(float rupees)
{
    float f;
    f=rupees/100.371298;
    printf("The amount in india %.2f",f);
}

