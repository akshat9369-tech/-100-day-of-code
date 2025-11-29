//Que 17 Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main(){
int n, n2, n3, r1, r2, d;
printf("enter the values of quadratic equation");
scanf("%d%d%d", &n,&n2,&n3);
d = (n2*n2 -4*n*n3);
r1 = (-n2 +sqrt(d)) /2*n;
r2 = (-n2 -sqrt(d)) /2*n;
printf("the root of the quadratic are %d,%d\n", r1, r2);
if(d > 0){
printf("root are real and complex");
}
else if(d == 0){
printf("root are  real and same");
}
else{
printf(" root are complex");
}
return 0;
}




