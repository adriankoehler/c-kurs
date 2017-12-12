#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n;
   time_t t;

   /* Intialize random number generator */
   srand((unsigned) time(&t));
   /* Print 10 random numbers from 1 to 6 */
   n = 10;
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\n", (rand() + 1) % 7);
   }
   return 0;
}
