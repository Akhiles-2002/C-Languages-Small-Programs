/*
 ARRAY :-
 SUM OF TWO ARRAY
 A[5] =12 45 66 66 77
 B[5] =1 3 4 5 6
 C[5] =

*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={12,33,44,55,66};
int b[5]={1,2,3,4,5};
int c[5];
int x;
clrscr();
printf("----value of a[5]-----\n");
for(x=0;x<5;x++)
{
printf("%d\t",a[x]);
}
printf("\n----value of b[5]-----\n");
for(x=0;x<5;x++)
{
printf("%d\t",b[x]);
}
printf("\n---c[5]-------\n");
for(x=0;x<5;x++)
{
c[x]=a[x]+b[x];
printf("%d ",c[x]);
}
getch();
}