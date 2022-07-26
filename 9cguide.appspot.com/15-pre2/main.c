#include <stdio.h>

int main(void)
{
  int *p;
  int i;
  printf("*p = %d\n", *p);
  printf("i = %d\n", i);
  printf("addr: p = %p\n", p);
  printf("addr: &i = %p\n", &i);
  printf("- - - - - - - - - -\n");
  p = &i;
  *p = 10;
  printf("*p = %d\n", *p);
  printf("i = %d\n", i);
  printf("addr: p = %p\n", p);
  printf("addr: &i = %p\n", &i);
}
