#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */

  /* ...so that this prints 98\n */
  printf("&n: %p\n", p);
  printf("p: %p\n", p);
  printf("p+1: %p\n", p+1);
  printf("p+2: %p\n", p+2);
  printf("p+2: %p\n", p+3);
  printf("p+3: %p\n", p+4);
  printf("p+4: %p\n", p+5);
  printf("p+5: %p\n", p+6);
  printf("a[2] = %p\n", (a+2));
  return (0);
}
