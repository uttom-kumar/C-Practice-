#include <stdio.h>

int main()
{
    int lower ;
    printf("Enter any lowercase letter : ");
    scanf("%c", &lower);

    printf("The uppercase letter = %c\n", lower-32);
}