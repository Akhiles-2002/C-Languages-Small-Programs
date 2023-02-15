/*
armstrong(three digit)
num=153
1+125+27=153
 1*1*1+
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,rem=0,save=0;
clrscr();
printf("Enter any number(three digit) \n");
scanf("%d",&n); //153
save=n;
while(n>0)
{
rem=n%10; //3
s=s+(rem*rem*rem); //  0=0+27  27=27+125 152=152+1
n=n/10;
}
if(save==s)
{
 printf("Armstrong ");
}
else
{
printf("Not armstrong ");
}
getch();
}