/*
1- if
2- if else
3- else if ladder (example)
1- wap in c which print student details accodring to choice
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //process.h  exit(0)
void main()
{
 int choice;
 clrscr();
 printf("\n\n\n**********List Of Students**********\n");
 printf("1- Nikita \n");
 printf("2- Akhilesh\n");
 printf("3- Rehan\n");
 printf("4- Priya\n");
 printf("5-Exit\n");
 printf("Enter your choice  ");
 scanf("%d",&choice);  //1
 if(choice==1)
 {
   printf(" Name  : Nikita Chaudhary\n");
   printf(" Course  : BCA\n");
   printf("Duration  : 3 Years\n");
   printf("University :IGNOU\n");
 }
 else if(choice==2)
 {
  printf(" Name  : Akhilesh Kumar\n");
   printf(" Course  : BCA\n");
   printf("Duration  : 3 Years\n");
   printf("University :IGNOU\n");
 }
 else if(choice==3)
 {
 printf(" Name  : Rehan Khan\n");
   printf("Course  : DCA\n");
   printf("Duration  : 1 Years\n");
   printf("University :SMU\n");
   }
else if(choice==4)
{
 printf(" Name  : Priya Arora\n");
   printf(" Course  : MCA\n");
   printf("Duration  : 3 Years\n");
   printf("University :JNU\n");
}
else if(choice==5)
{
exit(0);  //terminate program
}
else
{
printf("Sorry!!! Invalid choice ");
}

 getch();
}