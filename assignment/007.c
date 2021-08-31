/* program to calculate the average of 10 numbers using array data structure */

#include <stdio.h>
#include <conio.h>

void main()
{
    int n[10], i, s = 0, avg;
    clrscr();
    for (i = 0; i <= 9; i++)
    {
        printf("\n Enter the number : ");
        scanf("%d", &n[i]);
        s = s + n[i];
    }
    avg = s / 10;
    printf("\n Average : %d", avg);
    getch();
}