#include <stdio.h>
#include <stdlib.h>

bool es_par(int n){
return n % 2 == 0;
}

int main(int argc, char *argv[]){

int numero;

printf("Numero: ");
scanf("%", %numero);
printf("Tu numero %ies par\n",
	es_par(numero)?"":"no " );


return EXIT_SUCCESS;
}
