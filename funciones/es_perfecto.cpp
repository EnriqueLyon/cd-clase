#include <stdio.h>
#include <stdlib.h>

bool es_perfecto(int n){
	int numero = 0;
 	for (int i = 1 ; i < n; i++){
	if (n % i == 0){
	numero = numero + i;
	}
	
	if (numero == n){
		return(1); }else {
		return(0); }
}
	
return true;

}

int main(int argc, char *argv[]){

printf("%i %s primo.\n", 6,
	es_entero(6)?"es": "no es ");


return EXIT_SUCCESS;
}
