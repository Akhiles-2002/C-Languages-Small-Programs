#include<stdio.h>
#include<conio.h>
void main()
{
float r,p=3.14,ci,area;

clrscr();

printf("enter the value of r:");
scanf("%f",&r);

ci=2*p*r;
p=3.14;
printf("circumference of circle:%.2f",ci);

area=p*r*r;

printf("area of circle : %.2f",area);

getch();
}