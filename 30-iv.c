// 30. Write a program to print following patterns :

// (iv) 1
//      22
//      333
//      4444
//      55555

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d", i + 1);
        }
        printf("\n");
    }
    return 0;
}