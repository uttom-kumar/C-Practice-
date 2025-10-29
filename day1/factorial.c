#include <stdint.h>

int main() {
    int n, i;
    double mul = 1.0;

    printf("Enter any positive number : ");
    scanf("%d", &n);

   for (int i = 1; i <= n; i += 2) {
        mul *= 1.0 / (i * i);
    }

    printf("Multiplication = %.4lf", mul);
}