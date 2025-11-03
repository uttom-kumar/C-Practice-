#include <stdio.h>

int main () 
{
    int pCode1, pUnit1, pCode2, pUnit2;
    double pPrice1, pPrice2, total;

    scanf("%d %d %lf", &pCode1, &pUnit1, &pPrice1);
    scanf("\n");
    scanf("%d %d %lf", &pCode2, &pUnit2, &pPrice2);
    total = (pUnit1 * pPrice1)+(pUnit2 * pPrice2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
}