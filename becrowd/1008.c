#include <stdio.h>

int main()
{
    int n,hour;
    double amount, selary;

    scanf("%d %d %lf", &n, &hour, &amount);

    selary = amount * hour;
    printf("NUMBER = %d\nSALARY = U$ %.2lf", n,selary); 
}