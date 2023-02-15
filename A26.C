//power
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,a,b,c;
clrscr();
printf ("enter the number:");
scanf("%d",&n);
a=pow(n,1);
b=pow(n,2);
c=pow(n,5);
printf("%d,%d,%d\n",a,b,c);
getch();
}
