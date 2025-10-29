#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);

    
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("Largest Num1 = %d", num1);
    }
    else{
        printf("Largest Num2 = %d", num2);
    }
}