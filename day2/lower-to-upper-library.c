#include <stdio.h>

int main ()
{
    char letter, upper, lower;

    printf("Enter any letter: ");
    scanf("%c", &letter);

    upper = toupper(letter);
    lower = tolower(letter);


    if (letter >= 'a' && letter <= 'z') {
        // convert lowercase to uppercase
        printf("The Uppercase Letter = %c\n", upper);
    }
    else if (letter >= 'A' && letter <= 'Z') {
        // convert uppercase to lowercase
        printf("The Lowercase Letter = %c\n", lower);
    }
    else {
        printf("Please enter a valid alphabet letter (A-Z or a-z).\n");
    }

    return 0;
}
