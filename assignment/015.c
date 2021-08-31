/* program to swap the values of two variable without using a third one */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    clrscr();
    printf("\n Enter the number as A : ");
    scanf("%d", &a);
    printf("\n Enter the number as B : ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n Now A = %d", a);
    printf("\n Now B = %d", b);
    getch();
}