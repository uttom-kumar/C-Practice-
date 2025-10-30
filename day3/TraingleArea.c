#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b, c,s;
    double area=1.0;

    printf("Enter 3 value : ");
    scanf("%d %d %d", &a, &b, &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area : %.2lf", area);
}