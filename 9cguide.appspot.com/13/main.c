#include <stdio.h>

int main(void)
{
  int size = 10;
  int nums[size];

  int i, j;
  for (i = 0; i < size; i++) {
    printf("%d: ", i + 1);
    scanf("%d", &nums[i]);
  }
  for (j = size - 1; j >= 0; j--) {
    printf("%d: %d\n", j + 1, nums[j]);
  }
}
