// 56. Write a C program to print the address of character and the character of string using pointer.

#include <stdio.h>

int main(void)
{
    char str[50];
    char *ch;
    int i = 0;
    printf("\n Enter String : ");
    scanf("%s", str);
    ch = &str[0];
    while (*ch != '\0')
    {
        printf("\n Position : %u Character : %c", ch, *ch);
        ch++;
    }
    return 0;
}