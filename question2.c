//Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main(){
float a1,a2, sum, dif, pro, quo;
printf("enter the two number");
scanf("%f%f", &a1, &a2);
sum =a1+a2;
dif= a1-a2;
pro= a1*a2;
quo= a1/a2;
printf("the sum of your digits is %f\n", sum);
printf("the Diff of your digits is %f\n", dif);
printf("the product of your digits is %f\n", pro);
printf("the Quotient of your digits is %f\n", quo);
return 0;
}
