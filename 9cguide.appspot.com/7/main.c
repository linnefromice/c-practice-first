#include <stdio.h>

int main(void)
{
  int year;
  printf("input(year): ");
  scanf("%d", &year);
  if (year % 2 == 0) {
    if (year % 4 == 0) {
      printf("オリンピック開催: 夏季\n");
    } else {
      printf("オリンピック開催: 冬季\n");
    }
  } else {
    printf("オリンピック開催: なし\n");
  }
}