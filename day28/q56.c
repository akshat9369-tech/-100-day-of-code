//Q56.Read and print elements of a one-dimensional array.
#include<stdio.h>
int main(){
int arr[5];
printf("enter 5 numbers\n");
for( int i=1; i <= 5; i++){
scanf("%d", &arr[i]);
}
printf(" you entered :\n");
for( int i = 1; i < 5; i++){
printf("%d\n", arr[i] );
}
return 0;
} 
