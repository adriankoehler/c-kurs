#include "stdio.h"

int factorial(int a){
  if (a<=0)
    return 1;
  else
    return a * factorial(a-1);
}

int main(void) {
  int a;
  printf("enter a number: ");
  scanf("%d", &a);
  printf("a!=%d\n", factorial(a));

  return 0;
}
