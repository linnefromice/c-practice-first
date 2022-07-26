#include <stdio.h>
#include <string.h>

int main(void)
{
  int one, two, i;
  double dOne, dTwo;
  char strs[4];

  printf("%p\n", &one);
  printf("%p\n", &two);
  printf("%p\n", &i);
  printf("%p\n", &dOne);
  printf("%p\n", &dTwo);
  printf("--- loop ---\n");
  printf("array: %p\n", strs);
  for (i = 0; i < 4; i++) {
    printf("%p\n", &strs[i]);
  }
}
