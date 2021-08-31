/* program to find the largest element between 3 numbers using conditional statements only */

#include <stdio.h>
#include <conio.h>

void main()
{
  int a, b, c;
  clrscr();
  printf("\n Enter 3 numbers : ");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b)
  {
    if (a > c)
    {
      printf("\n The greatest number is : %d", a);
    }
    else
    {
      printf("\n The greatest number is : %d", c);
    }
  }
  else
  {
    if (b > c)
    {
      printf("\n The greatest number is : %d", b);
    }
    else
    {
      printf("\n The greatest number is : %d", c);
    }
  }
  getch();
}