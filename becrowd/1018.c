#include <stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);

    printf("%d\n", amount);

    int taka_note100 = amount / 100;
    amount = amount % 100;

    int taka_note50 = amount / 50;
    amount = amount % 50;

    int taka_note20 = amount / 20;
    amount = amount % 20;

    int taka_note10 = amount / 10;
    amount = amount % 10;

    int taka_note5 = amount / 5;
    amount = amount % 5;

    int taka_note2 = amount / 2;
    amount = amount % 2;

    int taka_note1 = amount/1;

    printf("%d nota(s) de R$ 100,00\n", taka_note100);
    printf("%d nota(s) de R$ 50,00\n", taka_note50);
    printf("%d nota(s) de R$ 20,00\n", taka_note20);
    printf("%d nota(s) de R$ 10,00\n", taka_note10);
    printf("%d nota(s) de R$ 5,00\n", taka_note5);
    printf("%d nota(s) de R$ 2,00\n", taka_note2);
    printf("%d nota(s) de R$ 1,00\n", taka_note1);

    return 0;
}