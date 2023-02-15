/*
***
**
*
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
for(r=1;r<=3;r++)
{
  for(c=3;c>=r;c--)
  {
    printf("*");

  }
  printf("\n");
}
getch();
}