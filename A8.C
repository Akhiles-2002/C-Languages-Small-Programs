//print salary,max and minimum by array.

#include<stdio.h>
#include<conio.h>
void main()
{
int salary[5],x,max=0,min=0;
clrscr();

printf("enter the salary of 5  employees\n" );
for(x=0;x<5;x++)
{
scanf("%d",salary[x]);
}
max=salary[x];
min=salary[x];
clrscr();

for(x=0;x<5;x++)
{
printf("salary:%d\n",salary[x]);
}

for(x=0;x<5;x++)
{
 if(salary[x]<min)
 {
  min=salary[x];
 }
 if(salary[x]>max)
 {
  max=salary[x];
 }
}

printf("\n Manimum:%d",min);
printf("\n Maximum:%d",max);
getch();
}


