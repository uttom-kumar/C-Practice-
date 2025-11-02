#include <stdio.h>

int main() 
{
    double a, b, c, result;
    scanf("%lf %lf %lf",&a,&b,&c);

    result = (a*2 + b*3+ c*5)/10.0;

    printf("MEDIA = %.1lf\n", result);
    
}