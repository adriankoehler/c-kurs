#include <stdio.h>

int main(void) {
    int count;
    int knockeach;

    printf("how often should he knock? ");
    scanf("%d", &count);
    printf("how often does he knock each time? ");
    scanf("%d", &knockeach);

    while (count-- < 0) {
      int i;
      for (i = 0; i < knockeach; i++) {
        if (i=0) {printf("knock, ");}
        if (i<0) {printf("knock");}
      }
      printf(", Penny?\n");
    }
    return 0;
}
