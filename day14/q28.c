//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, product = 1;
    int hasEven = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven)
        printf("Product of even numbers from 1 to %d is: %d\n", n, product);
    else
        printf("No even numbers in the given range.\n");

    return 0;
}
