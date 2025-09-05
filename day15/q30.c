//q.30 Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Temporary variable to control the loop
    int temp = num;

    for (; temp != 0; temp /= 10) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
