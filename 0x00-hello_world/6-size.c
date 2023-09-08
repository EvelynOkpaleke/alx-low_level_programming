#include <stdio.h>

int main(void)
{
  /* Declare variables of various types. */
  char c;
  short int si;
  int i;
  long int li;
  long long int lli;
  float f;
  double d;
  long double ld;

  /* Print the size of each variable. */
  printf("Size of char: %zu byte(s)\n", sizeof(c));
  printf("Size of short int: %zu byte(s)\n", sizeof(si));
  printf("Size of int: %zu byte(s)\n", sizeof(i));
  printf("Size of long int: %zu byte(s)\n", sizeof(li));
  printf("Size of long long int: %zu byte(s)\n", sizeof(lli));
  printf("Size of float: %zu byte(s)\n", sizeof(f));
  printf("Size of double: %zu byte(s)\n", sizeof(d));
  printf("Size of long double: %zu byte(s)\n", sizeof(ld));

  return 0;
}
