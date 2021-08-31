/* program to calculate the H.C.F of two integer numbers */

#include <stdio.h>
#include <conio.h>

void main()
{
    int divisor, dividend, remainder = 1, hcf, temp;
    clrscr();
    printf("\n Enter the 1st number : ");
    scanf("%d", &dividend);
    printf("\n Enter the 2nd number : ");
    scanf("%d", &divisor);
    if (dividend <= divisor)
    {
        temp = dividend;
        dividend = divisor;
        divisor = temp;
    }
    while (remainder != 0)
    {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    hcf = dividend;
    printf("\n The required HCF= %d", hcf);
    getch();
}