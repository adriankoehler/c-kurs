#include <stdio.h>

int main(void) {
	int sumEven = 0, NR1 = 0, NR2 = 1, NR;
	printf("Sum: %d\n",sumEven);
	while (NR1 < 100) {
		NR = NR1 + NR2;
		NR1 = NR2;
		NR2 = NR;
		if ((NR % 2) == 0) {sumEven += NR;}
		printf("NR: %d\n",NR);
	}
	printf("Sum: %d\n",sumEven);
	return 0;
}
