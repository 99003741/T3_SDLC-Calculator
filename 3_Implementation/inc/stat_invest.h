#ifndef STAT_INVEST_H_INCLUDED
#define STAT_INVEST_H_INCLUDED

#include<stdio.h>
//#include<conio.h>
#include<math.h>
double p, t, r, si, ci;
void invest();
double simple_interest(double , double, double );
double compound_interest(double, double, double);
int length;
void stat();
double meann(int len, double array[100]);
double mediann();
double modee(int len, double array[100]);



#endif // STAT_INVEST_H_INCLUDED