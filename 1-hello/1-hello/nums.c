// chapter1 // nums.c
#include <stdio.h>
#include <limits.h> // 최대 값/최소 값 볼 때

int main(void) {
	// char
	char ch = 'A';
	printf("char: \n");
	printf("Value: %c \n", ch);
	printf("MAX: %d\n", CHAR_MAX); // limit의 상수 상용
	printf("MIN: %d\n", CHAR_MIN);
	printf("------------------\n");

	// signed short int
	signed short int sshort = 1234;
	printf("signed short int: \n");
	printf("Value: %d \n", sshort);
	printf("MAX: %d\n", SHRT_MAX); // limit의 상수 상용
	printf("MIN: %d\n", SHRT_MIN);
	printf("------------------\n");

	// unsigned short int
	unsigned short int ushort = 1234;
	printf("unsigned short int: \n");
	printf("Value: %u \n", ushort);
	printf("MAX: %d\n", USHRT_MAX); // limit의 상수 상용
	printf("------------------\n");

	// signed int
	signed int sint = 12345;
	printf("signed int: \n");
	printf("Value: %d \n", sint);
	printf("MAX: %d\n", INT_MAX); // limit의 상수 상용
	printf("MIN: %d\n", INT_MIN);
	printf("------------------\n");

	// unsigned int
	unsigned int uint = 12345U;
	printf("unsigned int: \n");
	printf("Value: %u \n", uint);
	printf("MAX: %u\n", UINT_MAX); // limit의 상수 상용
	printf("------------------\n");

	// signed long int
	signed long int slong = 123456789L;
	printf("signed long int: \n");
	printf("Value: %ld \n", slong);
	printf("MAX: %ld\n", LONG_MAX); // limit의 상수 상용
	printf("MIN: %ld\n", LONG_MIN);
	printf("------------------\n");

	// unsigned long int
	unsigned long int ulong = 123456789UL;
	printf("unsigned int: \n");
	printf("Value: %lu \n", ulong);
	printf("MAX: %lu\n", ULONG_MAX); // limit의 상수 상용
	printf("------------------\n");

	return 0;
}