#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    puts("Dice rolling..");
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
      int a = rand()*10.0f / RAND_MAX;
      int b = rand()*10.0f / RAND_MAX;
      printf("%a+%b",a,b);
      int result;
      scanf("%d*\n", &result);
    }

    return 0;
}
