#include <stdio.h>

void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

int main (){
  int x = 3;
  int y = 4;

  swap(&x, &y);
  printf("%d %d\n",&x,&y);

  return 0;
}
