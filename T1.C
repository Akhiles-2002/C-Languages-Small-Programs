/*
1- menu - name
2- day
marskheet of any student
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int roll,h,e,m,sc,sst,t;
float per;
char name[20];
clrscr();
printf("Enter roll  ");
scanf("%d",&roll);
printf("Enter name  ");
scanf("%s",name);
printf("Enter marks of hindi ");
scanf("%d",&h);
printf("Enter marks of english ");
scanf("%d",&e);
printf("Enter marks of maths ");
scanf("%d",&m);
printf("Enter marks of sc ");
scanf("%d",&sc);
printf("Enter marks of sst ");
scanf("%d",&sst);
t=h+e+m+sc+sst;
per=t/5;
clrscr();
printf("*****MARKSHEET********\n");
printf("Roll : %d\n",roll);
printf("Name : %s\n",name);
printf("Hindi : %d\n",h);
printf("English : %d\n",e);
printf("Maths : %d\n",m);
printf("Science : %d\n",sc);
printf("SST : %d\n",sst);
printf("Total  : %d\n",t);
printf("Per   :%.2f\n",per);
if(per>=60)
{
printf("Div    : First\n");
}
else if(per<60&&per>=45)
{
printf("Div : Second \n");
}
else if(per<45&&per>=33)
{
printf("Div  : Third \n");
}
else
{
printf("Div : Fail \n");
}


getch();
}