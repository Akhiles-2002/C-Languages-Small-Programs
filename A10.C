#include<stdio.h>
#include<conio.h>
#define mul(x,y,z) (x*y*z)
void main()
{
int x,y,z,m;
clrscr();
printf("enter the value of x,y and z\n");
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
m=mul(x,y,z);

printf("multiplication of:%d\n",m);

getch();
}
