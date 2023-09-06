///***" this simple Calculator was written using the best of all time The 'C' Programming language"**\\\\
///***"Written by Abdulmohsen Aljeddawi"**\\\\
///***" this calc is a beta and the code is subject to change"**\\\\
///***"Version 0.1"**\\\\




#include <stdio.h>

///*^^^calling the main header of the C lang. it contains all the variables and functions of the language^^^^*\\\\

int
///*^^^^int is used to declar that a variable is an integer ^^^*\\\\

main ()
{
///*^^^^ 'main' is the entry point for the execution of the program  ^^^*\\\\
  
  int x;
  int y;
///*^^^^ int is used to declare both variables (x,y) as integers ^^^*\\\\
 
  printf ("Enter the First Number:");
  scanf ("%d", &x);


  printf ("Enter the seconed Number:");
  scanf ("%d", &y);
///*^^^^ printf is used to display the variables to the user during execution  ^^^*\\\\
///*^^^^ scanf is used to ask the user to input the variable value ^^^*\\\\

  int sum;
 ///*^^^^int "for example sum" is used to give a name to the operation of summing the variables  ^^^*\\\\
 

  int s;
  s = x+y;
  printf ("%d", s);

  int subtract;

  int f;
  f = x-y;
  printf ("\n%d", f);

  int divide;

  int d;
  d = x/y;
  printf ("\n%d", d);

  int multiple;

  int u;
  u = x*y;
  printf ("\n%d", u);


}


