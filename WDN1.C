/*
1- salary ,total,max
*/
#include<stdio.h>
#include<conio.h>
void main()
{
float salary[8],total=0.0,max=0.0;
int x;
clrscr();
printf("\nEnter salary of 8 employees \n");
for(x=0;x<8;x++)
{
  scanf("%f",&salary[x]);
}
max=salary[0];  //first salary assign into max
clrscr();
printf("\n------------------\n\n");
for(x=0;x<8;x++)
{
 printf("%.2f\n",salary[x]);
 total=total+salary[x];
}
printf("\n Total : %.2f\n",total);
for(x=0;x<8;x++)
{
    if(salary[x]>max)
    {
    max=salary[x];
    }
}
printf("\n Maximum Salary  : %.2f\n",max);
getch();
}