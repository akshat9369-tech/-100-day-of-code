//Q14 Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main(){
char alp;
printf("enter your character");
scanf("%c",&alp);
if( alp =='a' || alp =='e' || alp =='i' || alp =='o' || alp =='u'){
printf("entered character is vowel");
}
else{
printf("entered character is consonant");
}
return 0;
}

