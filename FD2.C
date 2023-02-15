#include<stdio.h>
#include<conio.h>
void main()
{
int arr[2][4]={
		{12,45,56,78},
		{56,78,67,89}
	      };
clrscr();
printf("%d\t",arr[0][0]);
printf("%d\t",arr[0][1]);
printf("%d\t",arr[0][2]);
printf("%d\n",arr[0][3]);

printf("%d\t",arr[1][0]);
printf("%d\t",arr[1][1]);
printf("%d\t",arr[1][2]);
printf("%d\n",arr[1][3]);

getch();
}