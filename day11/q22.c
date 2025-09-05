//Q.22 Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
int p, l, ps, ls ,c,s;
printf("enter the cost price ");
scanf("%d", &c);
printf("enter the selling point");
scanf("%d", &s);
if ( c < s){
printf("profit");
p = s - c;
ps = (p/c)*100;
printf("%f%%\n",ps);
}
if else ( c == s){
printf(" no profit no loss");
}
else{
printf("loss");
l= c - s;
ls = (l/c)*100; 
printf("%%%\n",ls);
}
return 0;
}
