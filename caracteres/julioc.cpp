#include <stdio.h>
#include <stdlib.h>

int main(){
	char palabra [] ="Avioneta";

	for(int i= 0; i < sizeof(palabra)/sizeof(char) - ; i++)
	printf("%c", palabra[i]+3);
	printf("\n");
	return EXIT_SUCCES;
}
