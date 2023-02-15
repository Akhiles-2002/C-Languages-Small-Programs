/*
1
12
123
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
for(r=1;r<=3;r++)
{
  for(c=1;c<=r;c++)
  {
    printf("%d",c);  // 1  12    123

  }
  printf("\n");
}
getch();
}