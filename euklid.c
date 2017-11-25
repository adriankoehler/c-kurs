#include <stdio.h>

int euklid(int a, int b){
  //falls a<b -> vertauscht;; A ist größer
  int tmp;
  if (a<b){tmp=a;a=b;b=tmp;}
  tmp=1;

  int res;
  int temp1a = 1,temp1b = 0;
  int temp2a = 0,temp2b = 1;
  int temp1aN = 1,temp1bN = 0;

  printf("    |%3d %3d\n",a,b);
  puts("---------------");
  printf("%3d |%3d %3d\n",a,temp1a,temp1b); // 1a 1b
  printf("%3d |%3d %3d\n",b,temp2a,temp2b); // 2a 2b

  while (b>0){
    res = a % b;
    temp1aN = temp1a - (a / b)*temp2a;
    temp1bN = temp1b - (a / b)*temp2b;
    // printf("%d-%d*%d=%d / ", temp1a,(a/b),temp2a,temp1aN);
    // printf("%d-%d*%d=%d\n", temp1b,(a/b),temp2b,temp1bN);

    printf("%3d |%3d %3d\n",res,temp1aN,temp1bN);
    temp1a = temp2a;
    temp1b = temp2b;
    temp2b = temp1bN;
    temp2a = temp1aN;

    a = b;
    b = res;
  }

  return a;
}

int main(){
  int a,b,res;
  printf("enter two numbers: ");
  scanf("%d %d",&a,&b);

  res = euklid(a,b);
  printf("\e[1;37m->gcd(%d,%d) = %d\n",a,b,res); //color

  return 0;
}
