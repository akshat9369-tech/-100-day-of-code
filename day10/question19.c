//Q.19 Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main(){
int a, b,c ;
printf("enter the side of triangle");
scanf("%d%d%d", &a,&b,&c);
if ( a==b && b == c){
printf("your triangle is equilateral");
}
else if ( a == b && b != c || a == c && a !=b || b  == c && a != c){
printf("your triangle is isosceles");
}
else { 
printf("the triangle is scalene");
}
return 0;
}
