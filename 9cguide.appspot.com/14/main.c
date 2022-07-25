#include <stdio.h>
#include <string.h>

int main(void)
{
  char firstName[100], lastName[100], fullName[200];
  printf("Last Name: ");
  scanf("%s", lastName);
  printf("First Name: ");
  scanf("%s", firstName);
  strcat(fullName, lastName);
  strcat(fullName, firstName);
  printf("Full Name: %s", fullName);
}
