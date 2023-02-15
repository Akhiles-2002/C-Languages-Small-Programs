/*
chapter : Array :
Array : A single variable stores multiple value but same type
(homogeneous) is called array.
 example
 simple variable
 a,b,c,d,e
 12,34,45,55,66
 array
 a[5];
It stores five values.
types of array
1- one dimensional array
2-two/multi dimensional array
1- One dimensional array :
syntax:
declaration of array :
datatype arrayname[size];
int a[5];
char name[20];
float salary[5];
initialization of array:
arrayname[size]={list of value};
a[5]={12,45,67,88,99};
------------
int a[5];
    a[0]=12;
    a[1]=45;
    a[2] =67;
    a[3]=88;
    a[4] =99;
    note  : 0,1,2,3,4-index/subscript
    note:- index start 0 to size-1
		       0 to 4;



wap in c which print 5 value by array.

*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={12,45,67,89,66};
clrscr();
printf("%d\n",a[0]);
printf("%d\n",a[1]);
printf("%d\n",a[2]);
printf("%d\n",a[3]);
printf("%d\n",a[4]);


getch();
}
