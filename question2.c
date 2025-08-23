//Q2 (User Inputs, Operations & Output)
//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main(){
int a1,a2, sum, dif, pro, quo;
printf("enter the two number");
scanf("%d%d", &a1, &a2);
sum =a1+a2;
dif= a1-a2;
pro= a1*a2;
quo= a1/a2;
printf("the sum of your digits is %d\n", sum);
printf("the Diff of your digits is %d\n", dif);
printf("the product of your digits is %d\n", pro);
printf("the Quotient of your digits is %d\n", quo);
return 0;
}
