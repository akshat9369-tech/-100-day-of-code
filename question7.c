#include<stdio.h>
int main(){
int a,b,c;
printf("enter your two  number");
scanf("%d%d", &a,&b);
printf(" your value before swap is %d and %d\n",a,b);  
a = a+b;
b= a-b;
a= a-b;
printf("your value after swap is %d and %d\n", a, b );
return 0;
}

  

