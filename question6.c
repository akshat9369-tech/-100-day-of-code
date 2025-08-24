#include<stdio.h>
int main(){
int a,b,c;
printf("enter your two number\n");
scanf("%d%d", &a, &b);
c = a;
a = b;
b = c;
printf("your value of first is %d and second is %d\n", a, c);
return 0;
}

