//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
float celsi, faren;
printf("enter the temperature in celcius");
scanf("%f", &celsi);
 faren = (celsi *9/5)+ 32;
 printf("temperature in farenhite is %f\n", faren);
 return 0;
 }
