//Q10.Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
int s,hr, mi, sec;
printf("enter your time in second");
scanf("%d", &s);
hr = s / 3600;                
    mi = (s % 3600) / 60;         
    sec = s % 60; 
printf("your time is %d:%d:%d", hr ,mi , sec);
return 0;
}

