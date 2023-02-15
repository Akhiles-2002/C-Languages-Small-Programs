#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={12,34,23,56,7};
int x,y,temp;
clrscr();
printf("** unsorted value **\n");
for(x=0;x<5;x++)
{
printf("%d\t",a[x]);
}
//sorting steps
for(x=0;x<5;x++)
{
 for(y=0;y<5;y++)
  {
  if(a[x]<a[y])
  {
  temp=a[x];
  a[x]=a[y];
  a[y]=temp;
  }
}
}
printf("\n\n\n");
for(x=0;x<5;x++)
{
printf("%d\t",a[x]);
}
getch();
}
