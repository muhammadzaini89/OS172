#include <stdio.h>

char huruf0='x';
char huruf1='y';
char huruf2='z';
char huruf3='b';

void main(void) {
	printf("=======================================\n");
	printf("huruf0: value = %2c, address = %p\n", huruf0, &huruf0);
	printf("huruf1: value = %2c, address = %p\n", huruf1, &huruf1);
	printf("huruf2: value = %2c, address = %p\n", huruf2, &huruf2);
	printf("huruf3: value = %2c, address = %p\n", huruf3, &huruf3);
	printf("=======================================\n");
}



