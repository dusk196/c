/* program to print the following pattern :

R
RI
RIT
RITA
RITAM

*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int i, j, n;
    char *str;
    clrscr();
    printf("\n Input the word : ");
    gets(str);
    n = strlen(str);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%s", str[j]);
        }
        printf("\n");
    }
    getch();
}