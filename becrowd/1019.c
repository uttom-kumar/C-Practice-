#include <stdio.h>

int main() {
    int totalSec, min, hour, sec;

    scanf("%d", &totalSec);

    hour = totalSec/3600;
    totalSec %= 3600;

    min = totalSec/60;
    totalSec%=60;

    sec = totalSec ;

    printf("%d:%d:%d\n",hour, min, sec);

}