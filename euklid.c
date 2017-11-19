#include <stdio.h>

int euklid(int a, int b){
  int res = 1;
  printf("%d\n", res);

  return res;
}

int main(){
  int a,b,res;
  printf("enter two numbers:");
  scanf("%d %d",&a,&b);

  res = euklid(a,b);
  printf("%d\n", res);

  return 0;
}
