/*
19/04/2021
print vowel or consonent
*/
#include<stdio.h>
#include<conio.h>
void main()
{
char alpha;
clrscr();
printf("Enter any alphabet  ");
scanf("%c",&alpha);
switch(alpha)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf(" This is vowel  ");
break;

default:
printf("Consonent ");
}
getch();

}



