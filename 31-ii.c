// 31. Write a program to print following patterns :

// (i) ABCDE
//     ABCD
//     ABC
//     AB
//     A

#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
