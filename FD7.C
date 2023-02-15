//print 3*3 matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3][3]={
		{12,45,56},
		{56,78,67},
		{34,67,73}
	      };
	      int r,c;
clrscr();
printf("\n___________________________________________________________\n");
for(r=0;r<3;r++)
{
  for(c=0;c<3;c++)
  {
printf("[%d,%d] :  %d\t",r,c,arr[r][c]);
 }
 printf("\n");
 }



getch();
}