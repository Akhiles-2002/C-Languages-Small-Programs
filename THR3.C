/*
print A to Z by for loop
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
for(a=65;a<=90;a++)
{
 printf("%c\t",a);
}
printf("\n\n\n\n");
for(a=97;a<=122;a++)
{
 printf("%c\t",a);
}
getch();
}