//Q3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main(){
int length , breath, area, per;
printf("enter the length and breadth of rectangle");
scanf("%d%d", &length , &breath);
area = length * breath;
per = 2*(length +breath);
printf(" area of your rectangle is %d\n", area);
printf(" perimeter of your rectangle is %d\n", per);
return 0;
}

