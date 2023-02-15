//print by loop
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[2][2]={
		{12,45},
		{56,78}
	      };
	      int r,c;
clrscr();
printf("---output----\n");
for(r=0;r<2;r++)
{
   for(c=0;c<2;c++)
   {
    printf("%d\t",arr[r][c]);
   }
   printf("\n");
}
getch();
}