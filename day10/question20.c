//Q.20 Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
int main(){
int a;
printf(" enter the number between 1-7");
scanf("%d", &a);
switch(a){
case 1 :printf("1:- Monday"); break;
case 2 :printf("2- Tuesday"); break;
case 3 :printf("3- Wednesday"); break;
case 4 :printf("4- Thursday"); break;
case 5 :printf("5- Friday"); break;
case 6 :printf("6- Saturday"); break;
case 7 :printf("7- Sunday"); break;
default :printf("invalid");
}
return 0;
}

