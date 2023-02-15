/*
print pyramid

*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("\n\n");
for(a=1;a<=10;a++)
{


  for(b=10;b>=a;b--)
  {
   printf("*");
  }
  for(c=1;c<=a;c++)
  {
   printf(" ");
   }
   for(d=2;d<=a;d++)
   {
   printf(" ");
   }
   for(e=10;e>=a;e--)
   {
   printf("*");
   }
  printf("\n");
}

getch();
}