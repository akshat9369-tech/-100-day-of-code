//Q8 Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
int num, de= 0;
printf("enter your natural number");
scanf("%d", &num);
for(int ac=1; ac<= num; ac++){
 de += ac;
}
printf("  final sum of your values is %d\n", de);
return 0;
}

