/* program to print the following pattern :

1
21
321
4321
54321

*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, n;
    clrscr();
    printf("\n Input the term : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    getch();
}