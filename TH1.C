/*
table of any number by do while

*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=1,t;
 clrscr();
 printf("\n\n ENTER ANY NUMBER ");
 scanf("%d",&n);
 do
 {
   t=a*n;
   printf("%d\n",t);  //a*n
   a++;
 }
 while(a<=10);

 getch();
}