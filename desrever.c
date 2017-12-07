#include <stdio.h>

void printarr(int dim, char array[dim]){
  printf("input: ");
  for (int i = 0; i<dim; i++) {
    printf("%s", array[i]);
  }
}

int main(){
  char input[42];
  fgets (input, sizeof input, stdin);
  printarr(sizeof input / sizeof input[0], input);


  return 0;
}
