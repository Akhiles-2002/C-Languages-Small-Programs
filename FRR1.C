/*
1-break
2-continue  :- To continue loop after skipped perticular statement.
continue;
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 for(a=1;a<=10;a++)
 {
    if(a==5)
    {
    continue;
    }
    printf("%d ",a);
 }
 getch();
}