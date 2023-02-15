//factorial
#include<stdio.h>
#include<conio.h>
void main()
{
long int fact=1;
int i,num;
clrscr();
printf("enter the number you want factorial:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("factorial:%ld",fact);
getch();
}