/* program to calculate the L.C.M of two integer numbers */

#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    clrscr();
    printf("\n Enter the number : ");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    while (c % a == 0 && c % b == 0)
    {
        c++;
    }
    printf("\n The L.C.M is %d ", c);
    getch();
}