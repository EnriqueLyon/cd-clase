#include <stdio.h>
#include <stdlib.h>

int main(){
	int lista[10];
	for(int i= 0; i<10; i++){
   	lista[i]=(1+i)*(1+i);
     printf("comprobacion: %i\n", lista[i]);
}
return EXIT_SUCCES;
}	
