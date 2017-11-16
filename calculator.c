#include <stdio.h>

int main(void) {
    float a = 0;
    float b = 0;
    char o = 0;

    int addition(int a, int b){
      int res = a + b;
      return res;
    }
    int multiplication(int a, int b){
      int res = a * b;
      return res;
    }


    printf("Enter first number:");
    scanf("%f", &a);

    printf("Enter 2nd number:");
    scanf("%f", &b);

    printf("Enter operand:");
    scanf("\n%c", &o);

    switch (o) {
        case 'a':
        case 'A':
        case '+':
            printf("%f\n", ((float)(addition(a,b))));
            break;
        case 's':
        case 'S':
        case '-':
            printf("%f\n", ((float)(addition(a,(-b)))));
            break;
        case 'm':
        case 'M':
        case '*':
            printf("%f\n", ((float)(multiplication(a,b))));
            break;
        case 'd':
        case 'D':
        case '/':
            if (b == 0)
                printf("Error: Division by zero.\n");
            else
            printf("%f\n", ((float)(multiplication(a,(1/b)))));
            break;
        /**
        case 'e':
        case 'E':
        case '^':
          float result;
          for (; b > 0; b--) {
            result = multiplication(a,a);
          }
          printf("%f\n", result);
            break;
            */
        default:
            printf("Error: wrong operator.");
    }

    return 0;
}
