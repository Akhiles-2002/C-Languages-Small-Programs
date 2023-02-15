/*
wap in c which print add/sub/div/mul/rem according to choice
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int a,b,c,choice;
 clrscr();
 printf("Enter value of a \n");
 scanf("%d",&a);
 printf("Enter value of b \n");
 scanf("%d",&b);
 printf("\n*********Mathemetical Operation*********\n");
 printf("1- Add\n");
 printf("2- Sub\n");
 printf("3-Mul\n");
 printf("4-Div\n");
 printf("5-Rem\n");
 printf("6-Exit\n");   //stdlib.h pocess.h
 printf("Enter your choice ");
 scanf("%d",&choice);
 if(choice==1)
 {
 c=a+b;
printf("Addition  : %d\n",c);
 }
 else if(choice==2)
 {
 c=a-b;
printf("Subtraction  : %d\n",c);
 }
 else if(choice==3)
 {
 c=a*b;
printf("Multilication  : %d\n",c);
 }
 else if(choice==4)
 {
 c=a/b;
printf("Division  : %d\n",c);
 }
 else if(choice==5)
 {
 c=a%b;
printf("Remainder  : %d\n",c);
 }
 else if(choice==6)
 {
 exit(0);
 }
 else
 {
 printf("Invalid choice  ");
 }
 getch();
}