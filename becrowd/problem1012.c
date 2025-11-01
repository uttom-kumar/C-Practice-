#include <stdio.h>

int main()
{
    double a, b, c, pi=3.14159;
    double triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    triangulo = 0.5 * (a * c);
    circulo =  pi * (c * c);
    trapezio = 0.5 * (a + b) * c;
    quadrado = b * b;
    retangulo = a * b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
    // printf("CIRCULO: %.3lf\n", circulo);
    // printf("TRAPEZIO: %.3lf\n", trapezio);
    // printf("QUADRADO: %.3lf\n", quadrado);
    // printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}
