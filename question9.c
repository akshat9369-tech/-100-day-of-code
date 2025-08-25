// Q9.Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){
int p, r,t,si, n;
float ci;
 printf("enter the principle\n");
 scanf("%d", &p);
 printf("enter the rate of interest\n");
 scanf("%d", &r);
 printf("enter the time\n");
 scanf("%d", &t);
 printf("enter the compounding frequency\n");
 scanf("%d", &n);
 si = (p*r*t)/100;
 ci = p * pow((1 + (r / (100 * n))), n * t) - p;
 printf(" your value of simple interest is %d\n", si);
 printf(" your value of compound interest is %f\n", ci);
 }
 

