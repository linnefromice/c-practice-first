#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[50];
  int age;
  char sex[25];
} person;

void setName(char *name[50]);
void setAge(int *age);
void setSex(char *sex[25]);

int main(void)
{
  person user;

  setName(&user.name);
  setAge(&user.age);
  setSex(&user.sex);

  printf("%s / %d / %s", user.name, user.age, user.sex);

  return 0;
}

void setName(char *name[50])
{
  printf("名前: ");
  scanf("%s", name);
}

void setAge(int *age)
{
  printf("年齢: ");
  scanf("%d", age);
}

void setSex(char *sex[25])
{
  printf("性別: ");
  scanf("%s", sex);
}