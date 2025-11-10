#include <stdio.h>

int main() {
    int days , years, mon, day;

    scanf("%d",&days);

    years = days/365;
    days = days%365;

    mon = days/30;
    days = days%30;

    day = days;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, mon, day);
}