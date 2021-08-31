/* program to calculate the factorial of a number */

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, f = 1;
    clrscr();
    printf("\n Enter the number : ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        f = f * i;
    }
    printf("\n Factorial : %d", f);
    getch();
}