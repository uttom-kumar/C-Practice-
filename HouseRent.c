#include <stdio.h>

int main() {
    double income, rent, rentAmount;

    printf("Enter your month income : ");
    scanf("%lf", &income);

    printf("Enter house rent : ");
    scanf("%lf", &rent);


    rentAmount = income * (rent/100);
    printf("House rent : %.2lf",rentAmount);

}