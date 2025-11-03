#include <stdio.h>

int main(){
    char name[50];
    double salary, productSell, total;

    scanf("%s %lf %lf", &name, &salary, &productSell);

    total = (0.15*productSell)+salary;
    printf("TOTAL = R$ %.2lf\n", total);
}