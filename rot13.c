#include <stdio.h>

int main(void) {
	char d;
	printf("Eingabe: ");
	scanf("%c", &d);
	int charNR = d - 'a';
	charNR = ((charNR + 13) % 26) + 'a';
	printf("ASCII-Wert: %d\nRot13-Version: %d\n",d);
	printf("ASCII-Wert: %c\nRot13-Version: %c\n",d);
	return 0;
}
