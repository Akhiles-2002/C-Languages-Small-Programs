/*
factorial
while

*/
#include<stdio.h>
#include<conio.h>
void main()
{
  long int n,f=1;
  clrscr();
  printf("\n\n  Enter any number ");
  scanf("%ld",&n); //5  5*4*3*2*1  4*3*2*1
    while(n>0)
    {
     f=f*n;       //1=1*5   5=5*4   20=20*3  60=60*2 120=120*1
     n--;
    }
    printf(" Factorial  : %ld",f);
  getch();
}