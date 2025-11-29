//q.50Write a program to print the following pattern:
//   45
//  345
// 2345
//12345
#include<stdio.h>
int main(){
int a, b, c, row =5;
for(a = row; a>= 1; a--){
    for( c = a ; c <= 5; c ++ ){
        for (b = row -1; b >= 1; b --){
            printf(" ");            
        }
        printf("%d", c);
    }
    printf("\n");
}
return 0;
}
 

