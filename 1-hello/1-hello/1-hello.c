#include <stdio.h>

void main(void) {
	char name[] = "yujung";
	float age = 20.75;

	printf("Hello, my name is %s\n", name);
	printf("\tI am %.1f years old.\n\n", age);

	return 0; // 0: 양수 / 1: 음수
}