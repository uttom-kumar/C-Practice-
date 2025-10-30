// print hello world! and welcome to hacker rank
// scanf() space এর পরে input নেয় না, কিন্তু fgets() পুরো line নেয়।

#include <stdio.h>

int main() {
    char s[1000];   
    printf("type any sentence : ");
    fgets(s, sizeof(s), stdin);

   
    printf("Hello, World!\n");
    printf("%s", s);

    return 0;
}
