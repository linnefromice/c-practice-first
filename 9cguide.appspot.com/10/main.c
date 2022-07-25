#include <stdio.h>

int main(void)
{
  int score;
  do {
    printf("input (score): ");
    scanf("%d", &score);
  } while (score < 0 || score > 100);
  printf("テストの点数は %d", score);
}