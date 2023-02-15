/*
wap in c which print Add/Sub/Mul/Div/Rem according to choice
(+,-,/ etc.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
char op;
clrscr();
printf("\n\nEnter value of a \n ");
scanf("%d",&a);
printf("Enter value of b \n");
scanf("%d",&b);
printf("*****Mathemetical Operations********\n");
printf("\n '+' :   Add\n");
printf(" '-'   :  Sub\n");
printf(" '*'   : Mul\n");
printf(" '/'   :  Div\n");
printf(" '%'   :  Rem\n");
printf(" 'E'   : Exit\n");
printf("Enter your choice ");
op=getche();   //input character
switch(op)
{
 case '+':
 c=a+b;
 printf("\nAdd : %d\n",c);
 break;
 case '-':
 c=a-b;
 printf("\nSub : %d\n",c);
 break;
 case '*':
 c=a*b;
 printf("\nMul : %d\n",c);
 break;
 case '/':
 c=a/b;
 printf("\nDiv : %d\n",c);
 break;
 case '%':
 c=a%b;
 printf("\nRem : %d\n",c);
 break;
 case 'E':
 case 'e':
 exit(0);
 defualt:
 printf("\nInvalid symbols/choice");




}




getch();
}