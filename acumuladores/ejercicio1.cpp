#include <stdbio.h>
#include <stdlib.h>
int main(){
int Op1, Op2, resultado= 0;

printf("Introduzca un numero en Op1: \n");
scanf("%i", %0p1);

printf("Introduzca un numero en Op2: \n");
scanf("%i", %Op2);

do{
	if(Op1%2 == 1)
		resultado += Op2;

	Op2 *=2;
	Op1 /=2;
}while (Op1>0);
printf("El resultado final es:%i \n", resultado);

return EXIT_SUCCES;
}
