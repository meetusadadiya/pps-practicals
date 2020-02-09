// 45. Write a C program to use recursive calls to evaluate
//     F(x) = x – x3 / 3! + x5 / 5 ! – x7 / 7! + … xn/ n!.

#include <stdio.h>
#include <math.h>

float rec_call(int, int);
int fact(int);

int main()
{
    int i, n, x;
    float sum = 0;
    printf("\n Enter Value of X :");
    scanf("%d", &x);
    printf("\n Enter no of iteration n :");
    scanf("%d", &n);
    sum = rec_call(x, n);
    printf("Sum = %f", sum);
    return 0;
}

float rec_call(int x, int n)
{
    static float sum;
    if (n == 1)
        return sum + x;
    if (n % 2 == 0)
    {
        sum = sum - ((pow(x, (2 * n) - 1) * 1.0) / fact((2 * n) - 1));
    }
    else
    {
        sum = sum + ((pow(x, (2 * n) - 1) * 1.0) / fact((2 * n) - 1));
    }
    rec_call(x, --n);
}

int fact(int n)
{
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}