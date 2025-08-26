//Q.12 Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
int num;
printf("enter your integer");
scanf("%d", &num);
if(num >0){
printf("your enter  integer is positive");
}
else if( num == 0){
printf(" your entered number is zero");
}
else{
printf("your entered number is negative");
}
return 0;
}


