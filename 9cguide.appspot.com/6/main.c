#include <stdio.h>

int main(void)
{
  double price;
  printf("List price:");
  scanf("%lf", &price);
  printf("-10%%: %0.2f\n", price * (1 - 0.1));
  printf("-30%%: %0.2f\n", price * (1 - 0.3));
  printf("-50%%: %0.2f\n", price * (1 - 0.5));
  printf("-80%%: %0.2f\n", price * (1 - 0.8));
  return 0;
}