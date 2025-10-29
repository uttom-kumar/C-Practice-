#include <stdio.h>

int main ()
{
    int upper;
    printf("Enter any Uppercase Letter : ");
    scanf("%c", &upper);
    printf("The Lowercase letter = %c\n", upper+32);
}