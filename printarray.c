#include <stdio.h>
/*
int use_sequences(int rows,int columns,int sequences[rows][columns]){
  doppelte for schleife
}*/

void printarr(int dim, int array[dim]){
  printf("[");
  for (int i = 0; i<dim-1; i++) {
    printf("%d,", array[i]);
  }
  printf("%d]\n",array[dim-1]);
}

int checkequal(int dim1, int array1[dim1], int dim2, int array2[dim2]){
  if (dim1!=dim2) return 0;
  for (int i = 0; i<dim1; i++) {
    if (array1[i]!=array2[i]) return 0;
  }
  return 1;
}

int main() {
  int array[5] = {1,2,3,4,6};
  int array2[5] = {1,2,3,4,7};
  int isequal;

  printarr((sizeof array / sizeof array[0]),array);
  printarr((sizeof array2 / sizeof array2[0]),array2);
  isequal = checkequal((sizeof array / sizeof array[0]),array,(sizeof array2 / sizeof array2[0]),array2);
  printf("isequal: %d\n", isequal);
  return 0;
}
