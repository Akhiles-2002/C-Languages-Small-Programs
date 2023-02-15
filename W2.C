/*
wap in c which week day  according to choice(1-7)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int day;
 clrscr();
 printf("\n\n\nEnter number between(1-7)\n");
 scanf("%d",&day);  //1
 if(day==1)  //compare
 {
  printf("Sunday  is holiday\n");
 }
 else if(day==2)
 {
 printf("Monday  : Working day\n");
 }
  else if(day==3)
 {
 printf("Tuesday  : Working day\n");
 }
 else if(day==4)
 {
 printf("Wednesday  : Working day\n");
 }
 else if(day==5)
 {
 printf("Thursday  : Working day\n");
 }
 else if(day==6)
 {
 printf("Friday  : Working day\n");
 }
 else if(day==7)
 {
 printf("Saturday  : Working day/Weekend\n");
 }
 else
 {
 printf("Invalid  number ");
 }

 getch();
}