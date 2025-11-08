#include <stdio.h>

int main()
{
    int f;
    double c;
    printf("Enter Fahrenheit  : ");
    scanf("%d", f);

    c = (f-32)/1.8;
    printf("Fahrenheit to Centigrade  = %.2lf",c);
    return 0;
}