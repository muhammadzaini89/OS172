#include <stdio.h>


char hurufpointer0='a';
char hurufpointer1='s';
char hurufpointer2='d';
char hurufpointer3='f';

char* ptrchr0=&hurufpointer0;
char* ptrchr1=&hurufpointer1;
char* ptrchr2=&hurufpointer2;
char* ptrchr3=&hurufpointer3;


void main(void){
	printf("hurufpointer0: val=%c, adr=%p\n",hurufpointer0, &hurufpointer0);
	printf("hurufpointer1: val=%c, adr=%p\n",hurufpointer1, &hurufpointer1);
	printf("hurufpointer2: val=%c, adr=%p\n",hurufpointer2, &hurufpointer2);
	printf("hurufpointer3: val=%c, adr=%p\n",hurufpointer3, &hurufpointer3);

	printf("ptrchr0: pts=%c, val=%p, adr=%p\n", *ptrchr0, ptrchr0, &ptrchr0);

}


