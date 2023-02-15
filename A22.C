//simple interest
#include<stdio.h>
#include<conio.h>
void main()
{
float amount,rate,time,si;
clrscr();
printf("enter any principle amount:");
scanf("%f",&amount);
printf("enter rate of interest:");
scanf("%f",&rate);
printf("enter period of time in year:");
scanf("%f",&time);

si=(amount*time*rate)/100;
printf("simple interest:%.2f",si);
getch();
}
