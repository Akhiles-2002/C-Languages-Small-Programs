/*
1- start and end and sum
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,s=0,start,end;
  clrscr();
   printf("\n\n");
    printf(" \n Enter starting number  ");
    scanf("%d",&start);
     printf(" \n Enter end number  ");
    scanf("%d",&end);

   for(a=start;a<=end;a++)
   {

    printf("%d\t",a);
    s=s+a;       //0=0+1   1=1+2  3=3+4..
   }
   printf("\n  sum : %d",s);
  getch();
}