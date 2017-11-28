#include <stdlib.h>
#include <stdio.h>

typedef struct element *list;
struct element {int value; list next;} element;

list cons(int n, list next) {
    list l = malloc(sizeof(*l));
    l->value = n;
    l->next = next;
    return l;
}

void printList(list l) {
    printf("[");
    while(l) {
        printf("%d", l->value);
        if(l->next) printf(", ");
        l = l->next;
    }
    printf("]\n");
}

/*int absoluteValue1 (lastVal, newVal) {
  if ((lastVal-newVal)*(lastVal-newVal)==1) return 1;
  else return 0;
}*/

int diff(list l) {
  int lastVal = (*l).value;
    while(l){
      if(l->next) {l = l->next;} else break;

      //printf("%d-%d=1?\n",lastVal,(l->value));
      if ((lastVal-(l->value))*(lastVal-(l->value))==1 || (lastVal-(l->value))*(lastVal-(l->value))==0) {
        lastVal=l->value;
      }
      else return 0;
    }
    return 1;
}

int main() {
    int difference;
    list l = cons(3, cons(6, cons(2, cons(1, cons(4, NULL)))));
    list l2 = cons(3, cons(4, cons(5, cons(6, cons(6, NULL)))));
    printf("l: ");
    printList(l);
    printf("l2: ");
    printList(l2);

    difference = diff(l);
    printf("list1: %d\n", difference);

    difference = diff(l2);
    printf("list2: %d\n", difference);

    return 0;
}
