// 30. Write a program to print following patterns :

// (ii) 12345
//      1234
//      123
//      12
//      1

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }
    return 0;
}
