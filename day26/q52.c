
//Write a program to print the following pattern:
//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*
#include <stdio.h>

int main() {
    int group;

    for (group = 1; group <= 5; group++) {
        int stars;

        if (group == 1 || group == 5) {
            stars = 1;
        } else if (group == 2 || group == 4) {
            stars = 3;
        } else {
            stars = 5;
        }

        for (int i = 0; i < stars; i++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}

