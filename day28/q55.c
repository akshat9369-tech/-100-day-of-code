//Q55 (Nested Loops without Arrays/Strings)
//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++) {
        int isPrime = 1; 

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    return 0;
}

