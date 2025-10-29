#include <stdio.h>
#include <conio.h> // if you want to use getch()

int main() {
    int number;
    printf("Octal number : ");
    scanf("%o", &number); 

    printf("Decimal number = %d", number);
    getch();
    return 0;
}
