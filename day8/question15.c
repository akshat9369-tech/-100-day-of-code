//q15 Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main(){
char chare;
printf("enter your character:\n");
scanf("%c", &chare);
if ( chare >= 'A' && chare <= 'Z'){
printf(" your character is capital alphabet");
}
else if( chare >= '0' && chare <= '9'){
printf(" your character is number");
}
else if ( chare >= 'a' && chare <= 'z'){
printf("your character is small");
}
else{
printf("your character is special character");
}
return 0;
}
  
 




