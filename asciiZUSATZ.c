#include <stdio.h>

int main(void) {
	char a,b,c,d,e;
	printf("Write 5 chars: ");
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	printf("%c%c%c%c%c\n",e,d,c,b,a);
	return 0;
}
