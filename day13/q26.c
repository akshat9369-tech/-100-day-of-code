//q.26 Write a program to print numbers from 1 to n.
#include<stdio.h>
int main(){
int num;
printf("enter your number");
scanf("%d", &num);
for( int i =1; i <= num; i++){
printf("%d\n", i);
}
return 0;
}
