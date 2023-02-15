/*


 3- else if ladder :
 It is used to multiple conditions.
 syntax:
if(condition 1)
{
  st1;
}
else if(con2)
{
st2;
}
else if(con3)
{
st3;
}
else
{
st4;
}
wap in c which check number is greatest in three values
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("\n\n\n\nEnter value of a ");
 scanf("%d",&a);
 printf("Enter value of b ");
 scanf("%d",&b);
 printf("Enter value of c ");
 scanf("%d",&c);
 if(a>b&&a>c)            // a=23 b=3 c=4
 {
 printf("A is greatest");
 }
 else if(b>a&&b>c)  // a=23  b=300  c=4
  {
  printf(" B is greatest ");
  }
 else                     //a=23  b=300 c=400
 {
 printf(" C is greatest");
 }

 getch();
}
