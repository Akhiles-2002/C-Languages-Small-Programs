/*
wap in c which print/check sum and multiply of any digit/number
 n=546
 s=15
 m=120
 with arg and with return
*/
#include<stdio.h>
#include<conio.h>
int sum(int n);
int mul(int n);
void main()
{
 int n,s,m;
 clrscr();
 printf("Enter any number ");
 scanf("%d",&n);
 s=sum(n);
 m=mul(n);
 printf(" sum  : %d",s);

 printf("\nmul  : %d",m);
 getch();


}
int sum(int n)
{
  int s=0,rem=0;
  while(n>0)   //678
  {
   rem=n%10;    //8
   s=s+rem;      //0=0+8
   n=n/10;
  }
 return(s);
}
int mul(int n)
{
  int m=1,rem=0;
  while(n>0)   //678
  {
   rem=n%10;    //8
   m=m*rem;      //1=1+8
   n=n/10;
  }
 return(m);
}