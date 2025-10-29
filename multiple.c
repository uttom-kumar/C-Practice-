// Write a C program that takes an integer input from the user and determines:

// whether it is a multiple of both 5 and 7,
// a multiple of only 5,
// a multiple of only 7,
// or not a multiple of either 5 or 7.


#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    if(num%5==0 && num%7==0){
        printf("Multiple of 5 and 7");
    }
    else if(num%5==0){
        printf("Multiple of 5");
    }
    else if(num%7 == 0){
        printf("Multiple of 7");
    }
    else{
        printf("not a multiple of either 5 or 7");
    }
}