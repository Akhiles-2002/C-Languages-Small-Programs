/*
wap in c which print salary of 7 employees and calulate total.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 float salary[7],total=0.0;
 int x;
 clrscr();
 printf("Enter salary of 7 employees \n");
 for(x=0;x<7;x++)
 {
  scanf("%f",&salary[x]);
 }
 printf("\n-----------Salary of 7 Employees-----\n");
 for(x=0;x<7;x++)
 {
  printf("%.2f\n",salary[x]);
  total=total+salary[x];     //0=0+500 500=500+1000
 }
 printf("\n Total Salary  : %.2f",total);
 getch();
}