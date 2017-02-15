#include <stdio.h>
#include <stdlib.h>

void incrementa(int *a, int num){

*a+=num;
}
int main(int argc, char*argv[]) {

int a = 2, b = 5;

incrementa(&a, 5);
incrementa(&b, 3);
incrementa(&a, -2);

printf("%i,%i" a,b);
return EXIT_SUCCESS;
}
