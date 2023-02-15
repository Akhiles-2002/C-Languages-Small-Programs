  /*
  control
  1- conditional if----
  2- branching switch
  3- looping
    while
    while()
    {
    }
    ->It is
    ,do while
    do while
    -> It is called 'exit control loop'
    -> In this loop first of all once print/execute then
    test condition.If condition is true continue otherwise ignore
    syntax:
    do
    {
      //body
    }
    while(condition);
  */
  #include<stdio.h>
  #include<conio.h>
  void main()
  {
    int a=1;
    clrscr();
    do
    {
     printf("%d\t",a);
     a++;
    }
    while(a<=10);
    getch();

  }