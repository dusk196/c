/* program to print the following pattern :

*
**
***
****
*****

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
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}