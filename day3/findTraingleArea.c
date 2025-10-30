#include <stdio.h>

int main()
{
    int base, height;
    double area;

    printf("Enter base : ");
    scanf("%d", &base);

    printf("Enter height : ");
    scanf("%d", &height);

    area = 0.5 * base * height;

    printf("Triangle Area = %.2lf\n", area);

    return 0;
}
