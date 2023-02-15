//value by keyboard
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int x;
clrscr();
printf("Enter 5 values  ");
for(x=0;x<=4;x++)
{
scanf("%d",&a[x]);
}
printf("\noutput\n");
for(x=0;x<=4;x++)
{
printf("%d\n",a[x]);
}


getch();
}
