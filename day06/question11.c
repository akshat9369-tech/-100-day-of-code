//Q11 Write a program to input an integer and check whether it is even or odd using if–else.


#include<stdio.h>
int main(){
 int num;
 printf("enter your integer");
 scanf("%d", &num);
 if (num%2 == 0){
 printf( " your integer is even");
 }
 else{
 printf(" your integr is odd");
 }
 return 0;
 } 
