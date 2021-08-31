/* program to determine whether a given number is palindrome or not */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, t, x, s = 0;
    clrscr();
    printf("\n Enter the number : ");
    scanf("%d", &t);
    a = t;
    while (a != 0)
    {
        x = a % 10;
        s = s * 10 + x;
        a = a / 10;
    }
    if (s == t)
        printf("The number is Palimdrome");
    else
        printf("The number is not Palimdrome");
    getch();
}