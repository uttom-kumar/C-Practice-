/*
Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.

Task

You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .

Input Format

First, take a character,  as input.
Then take the string,  as input.
Lastly, take the sentence  as input.

Constraints

Strings for  and  will have fewer than 100 characters, including the newline.
*/

#include <stdio.h>

int main()
{
    char ch, s[100], sen[100];
    scanf("%c", &ch);

    scanf("%s",s);
    scanf("\n");

    scanf("%[^\n]%*c",sen);


    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s", sen);

}