// 54. Write a program to print address of variable using pointer.

#include <stdio.h>

int main(void)
{
    int i = 15;
    int *p;
    p = &i;
    printf("\n Address of Variable i = %u", p);
    return 0;
}