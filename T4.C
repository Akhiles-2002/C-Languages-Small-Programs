/*
wap in c which check any person eligible for voting ot not

*/
#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("\n\n\nEnter any age  ");
scanf("%d",&age);
if(age>=18)
{
 printf("eligible for voting");
}
else
{
printf(" Not eligible for voting ");
}
getch();
}