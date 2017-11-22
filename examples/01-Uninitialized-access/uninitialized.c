//#include "tis_builtins.h"

int foo (int* array , int n )
{
  /*@ requires n == 5 ;
  ensures n >= 10;
  */
  //int array[5] = {13, 7, 42, 0, 1};
  int i; //, n= 5; //tis_interval (0,255);

  for (i = 0; i < 5; i++) {
    /* The variable 'n' is declared at line 4, but is never
       initialized before usage. The analyzer emit then an alarm
       about uninitialized variable.

       This is an undefined behavior to read a local variable
       that has not been initialized. */
    n += array[i];
  }

  return 0;
}

int main () 
{
  int = 5;
  
  int array [4] = {13, 7, 42, 0};
  foo( array, n);
  return 0;
}
