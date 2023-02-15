/*
1- 1 to 10 and sum
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,s=0;
  clrscr();
   printf("\n\n");
   for(a=1;a<=10;a++)
   {

    printf("%d\n",a);
    s=s+a;       //0=0+1   1=1+2  3=3+4..
   }
   printf("\n  sum : %d",s);
  getch();
}