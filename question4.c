//Q4 Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main(){
float area, cir, rad;
printf("enter the radius of circle");
scanf("%f", &rad);
area =  3.14 * rad *rad;
cir = 2 * 3.14 * rad;
printf(" area of circle  = %f\n", area);
printf("circumference of circle = %f\n", cir);
return 0;
}
