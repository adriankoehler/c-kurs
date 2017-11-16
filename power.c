#include "stdio.h"

int main(void) {
    int a;
    int b;
    int solution = 1;

    printf("enter 2 numbers: ");
    scanf("%d %d",&a,&b);

    for (int i = b; i > 0; i--) {
      //printf("%d\n", i);
      solution *= a;
    }
    printf("%d^%d=%d\n",a,b,solution);

    solution = 1;
    for (int i = a; i > 0; i--) {
      solution *= b;
    }
    printf("%d^%d=%d\n",b,a,solution);

    //factorial a
    for (solution = 1; a > 1; a--) {
      solution*=a;
    }
    printf("a!=%d\n", solution);

    for (solution = 1; b > 1; b--) {
      solution*=b;
    }
    printf("b!=%d\n", solution);
    return 0;

}
