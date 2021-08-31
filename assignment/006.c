/* program to check whether a number is Armstrong number or not */

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int n, t, m = 0, d, s = 0;
    clrscr();
    printf("\n Enter the number : ");
    scanf("%d", &n);
    t = n;
    while (t != 0)
    {
        t = t / 10;
        m = m + 1;
    }
    t = n;
    while (t != 0)
    {
        d = t % 10;
        t = t / 10;
        s = s + pow(d, m);
    }
    if (s == n)
        printf("\n The number is Armstrong.");
    else
        printf("\n The number is not Armstrong.");
    getch();
}