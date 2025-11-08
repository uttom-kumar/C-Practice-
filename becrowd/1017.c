#include <stdio.h>

int main()
{
    int s, h;
    double fuelAvarge;
    // using a car that does 12 Km/L
    int km_L = 12.0;
    scanf("%d %d", &s, &h);
    fuelAvarge = (s*h)/km_L;

    printf("%.3lf\n",fuelAvarge);
}