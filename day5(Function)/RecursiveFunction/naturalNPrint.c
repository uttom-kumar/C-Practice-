#include <stdio.h>

int naturalFunction(int n) {
    if (n == 0)
        return 0;
    naturalFunction(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    naturalFunction(n);
    return 0;
}
