// Count positive, negative, and zero elements in an array.
#include<stdio.h>
int main(){
int n,poss, neg , zero;
printf(" enter the number of  elements in your array\n");
scanf("%d", &n);
int arr[n];
printf(" enter the number in array\n ");
for( int i =0; i < n ; i++){
scanf("%d", &arr[i]);
}
for( int i =0; i < n; i++){
if (arr[i] > 0){
poss ++;
}
else if (arr[i] == 0){
zero ++;
}
else{
neg ++;
}
}
printf(" posstive number = %d\n", poss); 
printf(" negative  number = %d\n", neg);
printf(" zero number = %d\n", zero);
return 0;
}