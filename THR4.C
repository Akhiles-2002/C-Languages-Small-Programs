/*
print A to Z by for loop
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
for(a=65,b=97;a<=90,b<=122;a++,b++)
{
 printf("%c %c\t",a,b);
}

getch();
}