//print value with index
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3][4]={
		{12,45,56,78},
		{56,78,67,89},
		{34,67,73,23}
	      };
	      int r,c;
clrscr();
printf("\n___________________________________________________________\n");
for(r=0;r<3;r++)
{
  for(c=0;c<4;c++)
  {
printf("[%d,%d] :  %d\t",r,c,arr[r][c]);
 }
 printf("\n");
 }



getch();
}