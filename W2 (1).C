/*
print even between 1 to 30
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int a=1;
  clrscr();
    while(a<=30)
    {
	 if(a%2==0)
	 {
	printf("%d\t",a);
	  }
	a++;
    }
  getch();
}