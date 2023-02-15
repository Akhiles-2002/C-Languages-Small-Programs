//arithmatic operation.
#include<stdio.h>
#include<conio.h>
#define arth(x,y,z) ((x/y)*(x*z))
void main()
{
float x,y,z,a;
clrscr();
printf("enter the value of x,y and z\n");
scanf("%f",&x);
scanf("%f",&y);
scanf("%f",&z);
a=arth(x,y,z);

printf("arithmatic of:%.2f\n",a);

getch();
}
