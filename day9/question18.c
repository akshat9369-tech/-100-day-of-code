//q 18 Write a program to assign grades based on a percentage input
#include<stdio.h>
int main(){
float gr;
printf("enter the marks you scored : ");
scanf("%f", &gr);
if( gr >= 91 && gr <= 100){
printf("grade A");
}
else if( gr >= 81 && gr <= 90){
printf("grade B");
}
else if( gr >= 71 && gr <= 80){
printf("grade C");
}
else if( gr >= 61 && gr <= 70){
printf("grade D");
}
else if( gr >= 51 && gr <= 60){
printf("grade E");
}
else{
printf("Grade F");
}
return 0;
}

