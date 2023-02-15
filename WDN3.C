/*
searching in array  :
To search data in array list
-> linear search/sequential :
12 45 1 34 55 2
num=34
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[6]={12,45,1,34,55,2};
 int x,num;
 clrscr();
 printf("Array element\n");
 for(x=0;x<6;x++)
 {
  printf("%d\t",arr[x]);
 }
 printf("\nEnter number to search\n");
 scanf("%d",&num);
 for(x=0;x<6;x++)
 {
   if(arr[x]==num)
   {
     printf("Found ");
   }
   /*else
   {
   printf("Not found");
   }*/
 }
 getch();
}