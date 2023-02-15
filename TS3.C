/*
wap in c which print array in reverse order
arr[5]={12,34,55,66,77};
ans- 77 66 55 34 12
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5]={12,34,55,66,77};
int x;
clrscr();
printf("\n--Array\n");
for(x=0;x<5;x++)
{
 printf("%d\t",arr[x]);
}
printf("\n--Array in Reverse \n");
for(x=4;x>=0;x--)
{
 printf("%d\t",arr[x]);
}

getch();
}
