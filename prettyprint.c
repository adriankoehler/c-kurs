#include <stdio.h>

//\e[1;36m -> cyan;
//\e[1;46m -> cyan BG;

int main(void) {
    printf("x   |");

    for (int i = 1; i <= 10; i++)
        printf("%3d  |", i);

    printf("\n");
    printf("-----------------------------------------------------------------\n");
    printf("\e[1;37m1/x |");

    for (int i = 1; i <= 10; i++)
        printf("\e[1;36m%3.3f\e[1;37m|", 1.0 / i);

    printf("\n");

    return 0;
}
