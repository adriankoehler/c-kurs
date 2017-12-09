#include <stdio.h>

int einheitenANZ = 0;

int euklid(int a, int b){
  //a>b!

  printf("%d,%d -> ", b, a);
  int res;

  while (b>0){
    res = a % b;
    a = b;
    b = res;
  }
  printf("%d\n", a);
  return a;
}

int main(){
  int modNR,res;
  printf("Z*__: ");
  scanf("%d",&modNR);

  for (int i=1; i <= modNR; i++) {
    res = euklid(modNR,i);
    if (res==1) einheitenANZ++;
  }

  // TODO: printf("einheiten: ["); //in list
  printf("\e[1;37m->phi(%d) = %d\n",modNR,einheitenANZ);

  return 0;
}
