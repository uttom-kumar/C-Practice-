#include <stdio.h>

int main() {
    int amount, reminder_note;

    scanf("%d", &amount);

    reminder_note = amount / 100;
    printf("%d nota(s) de R$ 100, 00\n", reminder_note);
    amount %= 100;

    reminder_note = amount / 50;
    printf("%d nota(s) de R$ 50, 00\n", reminder_note);
    amount %= 50;

    reminder_note = amount / 20;
    printf("%d nota(s) de R$ 20, 00\n", reminder_note);
    amount %= 20;

    reminder_note = amount / 10;
    printf("%d nota(s) de R$ 10, 00\n", reminder_note);
    amount %= 10;

    reminder_note = amount / 5;
    printf("%d nota(s) de R$ 5, 00\n", reminder_note);
    amount %= 5;

    reminder_note = amount / 2;
    printf("%d nota(s) de R$ 2, 00\n", reminder_note);
    amount %= 2;

    reminder_note = amount / 1;
    printf("%d nota(s) de R$ 1, 00\n", reminder_note);

    return 0;
}
