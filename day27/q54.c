//q54.Write a program to print the following pattern:
//   *
//  ***
// *****
//*******
 //*****
 //***
 // *
 
 #include <stdio.h>

int main() {
    int a, b, c;
    int row = 4;
    for (a = 1; a <= row; a++) {
        for (b = 1; b <= row - a; b++) {
            printf(" ");
        }
        for (c = 1; c <= 2 * a - 1; c++) {
            printf("*");
        }
        printf("\n");
    }
    for (a = row - 1; a >= 1; a--) {
        for (b = 1; b <= row - a; b++) {
            printf(" ");
        }
        for (c = 1; c <= 2 * a - 1; c++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
