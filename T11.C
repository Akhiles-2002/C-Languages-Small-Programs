#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int x;
clrscr();

printf("enter 5 value\n");
for(x=0;x<=4;x++)
{
 scanf("%d",&a[x]);
}
printf("\n---output---\n");

for(x=0;x<=4;x++)
{
 printf("%d\n",a[x]);
}

getch();
}