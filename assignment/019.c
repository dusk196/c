/* program to find the smallest and largest among 20 integers using array data structure */

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i;
    clrscr();
    int a[18], max, min, i, tm, tn;
    clrscr();
    printf("\n Input a number: ");
    scanf("%d", &max);
    printf("\n Input a number: ");
    scanf("%d", &min);
    for (i = 0; i <= 7; i++)
    {
        printf("\n Input a number: ");
        scanf("%d", &a[i]);
        if (max <= n[i])
        {
            tm = max;
            max = n[i];
            n[i] = tm;
        }
        if (min >= n[i])
        {
            tn = min;
            min = n[i];
            n[i] = tn;
        }
    }
    printf("\n The smallest number is : %d and the largest number is : %d", min, max);
    getch();
}