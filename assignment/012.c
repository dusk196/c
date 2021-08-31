/* program to separate the digits of an integer number */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, x, s = 0;
    clrscr();
    printf("\n Enter the number : ");
    scanf("%d", &a);
    printf("\n The separated the digits are :");
    while (a != 0)
    {
        x = a % 10;
        printf(" %d,", s);
        a = a / 10;
    }
    getch();
}