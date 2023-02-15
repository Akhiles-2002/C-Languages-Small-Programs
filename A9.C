#include<stdio.h>
#include<conio.h>
void main()
{
int a=0;
clrscr();

while(a<10)
{
a++;
if(a==5)
continue;
ptintf("statement:%d\n",a);
}
printf("\nend of program");
getch();
}
