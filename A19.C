#include<stdio.h>
#include<conio.h>

int main()
{
int rev,n;
clrscr();
printf("enter the value of n");
scanf("%d",&n);

rev=reverse_function(n);
printf("after reverse the no. is :%d",rev);

return 0;
}
int sum=0,rem,n;
reverse_function(int n)
{
if(n)
{
rem=n%10;
sum=sum*10+rem;
reverse_function(n/10);
}
else
{
return sum;
}
return sum;
}
