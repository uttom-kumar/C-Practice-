#include <stdio.h>
#include <conio.h> // if you want to use getch()

int main() {
    int number;
    printf("Decimal number : ");
    scanf("%d", &number); 

    printf("Octal number = %o", number);
    getch();
    return 0;
}
