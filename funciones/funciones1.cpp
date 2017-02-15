#include <stdio.h>
#include <stdlib.h>
/*METASE 23 <intro> para probar */
int multiplica(int op1, int op2){
	return op1 * op2;
}
int main(int argc, char *argv[]){

        int a, b;

        printf("%ix%i=%i\n",
                 a = getchar() -'0',
                 b = getchar() -'0',
                 multiplica(a,b) );

        return EXIT_SUCCESS;
}
