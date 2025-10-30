// sum and difference of two numbers
// take two int number and 2 float number;


#include <stdio.h>

int main()
{
    int a,b, sum1=0, dif1=0;
    double c,d,sum2=0.0, dif2=0.0;

    scanf("%d\n%d", &a, &b);
    scanf("%lf\n%lf", &c, &d);

    sum1 = a+b;
    dif1 = a-b;

    sum2 = c+d;
    dif2 = c-d;

    printf("%d %d\n",sum1,dif1);
    printf("%.1lf %.1lf",sum2,dif2);
}