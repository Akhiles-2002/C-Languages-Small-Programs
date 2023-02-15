/*
0-size-1
07/05/2021
1-one dimenional array(1D)
2- two dimensional array.(2D)
declaration  :-
datatype arrayname[row size][col size];
int arr[2][2];
0,0   0,1
1,0   1,1
arr[2][2]={
	   {12,45},
	   {56,78}
	  };

*/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[2][2]={
		{12,45},
		{56,78}
	      };
clrscr();
printf("%d\t",arr[0][0]);
printf("%d\n",arr[0][1]);
printf("%d\t",arr[1][0]);
printf("%d",arr[1][1]);
getch();
}