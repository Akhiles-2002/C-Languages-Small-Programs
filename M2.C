/*
vowel or consonent(by if)

*/
#include<stdio.h>
#include<conio.h>
void main()
{
  char alpha;
  clrscr();
  printf("Enter any alphabet ");
  scanf("%c",&alpha); //e/u
  if(alpha=='a'||alpha=='A'||alpha=='e'||alpha=='E'||alpha=='i'||alpha=='I'||alpha=='o'||alpha=='O'||alpha=='u'||alpha=='U')
  {
   printf("This is vowel  ");
  }
  else
  {
  printf("This consonent ");
  }

  getch();
}