/*
1-while
2-do while
3- for
4- nested for or for within for
for(---------)  //outer
{
  for(-----------) //inner
  {

  }
}
***
***
***
r=1 c=1 to 3
***
r=2
***
r=3
***
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
for(r=1;r<=3;r++)//r=1  r=2   r=3
{
  for(c=1;c<=3;c++)
  {
    printf("*");
  }
  printf("\n");
}

printf("Thanks!!");
getch();
}