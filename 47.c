// 47. Write a C program using global variable, static variable.

#include <stdio.h>

int fact();
int n;
int main()
{
    printf("\n Enter Value of n :");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}

int fact()
{
    static int ans = 1;
    if (n == 1)
    {
        return ans;
    }
    ans = n-- * fact();
}