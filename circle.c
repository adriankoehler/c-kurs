#include <stdio.h>
#include <math.h>

int main(void) {
	float radius;
	int addNR;
	printf("Radius, addNR: ");
	scanf("%f%d", &radius,&addNR);
	float area = (M_PI) * radius * radius;
	int isbelow = 0;
	if (addNR < area) {isbelow = 1;}
	printf("Area: %f\nIsBelow:%d\n",area,isbelow);

	return 0;
}
