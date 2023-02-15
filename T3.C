/*
1- if
2- if else
3- else if ladder
4- nested if  or if within if
syntax:
 if(con1)  //outer
 {
     if(con2)   //inner
     {
       st1;
     }
     else
     {
     st2;
     }
}
else
{

}

program print greatest number

*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
 printf("Enter value of a");
 scanf("%d",&a);
 printf("Enter value of b");
 scanf("%d",&b);
 printf("Enter value of c");
 scanf("%d",&c);
 if(a>b)     // 12 3 4   12 3 40     12  30  4   12  30 400
 {
     if(a>c)
     {
     printf("A is greatest");
     }
     else
     {
     printf("C is greatest");
     }

 }
 else
 {
	 if(b>c)
	 {
	 printf("B is greatest");

	 }
	 else
	 {
	 printf(" C is greatest");
	 }

 }

getch();

}