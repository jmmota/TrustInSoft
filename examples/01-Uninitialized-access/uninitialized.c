int foo (int* array )
{
  //int array[5] = {13, 7, 42, 0, 1};
  int i, n=TIS_interval (0,255);

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
  int array [4] = {13, 7, 42, 0};
  foo( array);
  return 0;
}
