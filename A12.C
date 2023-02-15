#include<stdio.h>
#include<conio.h>
#define arth(x,y,z) (x+y+z)
void main()
{
int x,y,z,a;
clrscr();
printf("enter the value of x,y and z\n");
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
a=arth(x,y,z);

printf("multiplication of:%d\n",a);

getch();
}
