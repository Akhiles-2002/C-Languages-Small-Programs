#include<stdio.h>
#define REM(x,y) (x%y)
#include<conio.h>
void main()
{
int x=10,y=4,z;
clrscr();

z=REM(x,y);

printf("remainder of :%d",z);

getch();
}