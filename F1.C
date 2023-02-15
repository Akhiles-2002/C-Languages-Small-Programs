/*

16/04/2021
if(if ,if else,ladder else if,nested if)
2- branching

switch case :  The switch statement allows us to
execute one block among many alternatives.
note  : It replaces ladder else if.
syntax:
switch(expression/variable)
{
  case 1:
  statement1;
  break;
  case 2:
  statement2;
  break;
  case 3:
  statement4;
  default:
  statement;
}
 note :
 1- break  : It is terminate switch block(not program)
 2- In case float and string not allow
 3-without break create fallthrough situation.
wap in c which print details according to choice(switch case)
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int choice;
 clrscr();
 printf("\n\n*************List of Students**********\n");
 printf("1- Nitika\n");
 printf("2-Nur\n");
 printf("3-Akhilesh\n");
 printf("4-Neha\n");
 printf("5-Rehan\n");
 printf("6-Exit\n");
 printf("Enter your choice  ");
 scanf("%d",&choice);   //1 or 2
 switch(choice)  //1 or 2 or 3
 {
 case 1:   //choice==1
 printf("Nikita is student of BCA.She is hardworking girl.\n");
 break;  //break/terminate switch block
 case 2:
 printf("Nur is student of MCA.He likes 'C' language.\n");
 break;
 case 3:
 printf("Akhilesh is student of BCA.He likes 'C++' language.\n");
 break;
 case 4:
 printf("Neha is student of BCA.She is friend of Nikita\n");
 break;
 case 5:
 printf("Rehan is student of DCA.He is friend of Akhilesh\n");
 break;
 case 6:
 exit(0);
 default:    //like else
 printf("Invalid !!!");
 }

 getch();
}