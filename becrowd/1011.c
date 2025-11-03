#include <stdio.h>


int main()
{
    double r, result;
    scanf("%lf",&r);
    double pi=3.14159;

    result = (4.0/3.0)*pi*(r*r*r);

    printf("VOLUME = %.3lf\n", result);
}