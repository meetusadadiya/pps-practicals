// 8. Write a C program to find that the accepted number
// is Negative, or Positive or Zero.

#include <stdio.h>

int main()
{
    int no;
    printf("\n Enter any number : ");
    scanf("%d", &no);
    if (no == 0)
    {
        printf("\n Entered Number is Zero");
    }
    else if (no > 0)
    {
        printf("\n Entered Number is Positive");
    }
    else
    {
        printf("\n Entered Number is Negative");
    }
    return 0;
}