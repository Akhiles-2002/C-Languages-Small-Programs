/*
1- print even number 1 to 50 and sum

*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,s=0;
 clrscr();
 for(n=1;n<=50;n++)
 {
    if(n%2==0)
    {
     printf("%d\t",n);
     s=s+n;
    }
 }
 printf("\n  Sum of even  : %d",s);
 getch();
}