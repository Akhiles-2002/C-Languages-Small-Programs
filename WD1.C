/*
1-

1
22
333

2-
print pyramid
       *
      ***
     *****
 nested for
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int r,c;
 clrscr();
 for(r=1;r<=3;r++)
 {
   for(c=1;c<=r;c++)  //3
   {
     printf("%d",r);             // r=1 22  333
   }
     printf("\n");
}

 getch();

}
