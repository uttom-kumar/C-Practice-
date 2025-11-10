#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double d, x1, x2;

    printf("Enter value of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (d < 0) {
        printf("No real roots (discriminant is negative).\n");
    } else {
        d = sqrt(d);
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);

        printf("x1 = %.3lf\nx2 = %.3lf\n", x1, x2);
    }

    return 0;
}
