#include <stdio.h>
#include <stdlib.h>

int main(void){

    int valor = 10;
    int *ponteiro = &valor;

    printf("O endereço de valor é: %x \n",&valor);
    printf("O endereço que está no ponteiro é: %x \n",ponteiro);
    printf("O valor que está na varíavel referência do ponteiro é: %i \n",*ponteiro);



    int *ptr;
    int **pptr;
    
    int valor2 = 20;

    ptr = &valor2;
    pptr = &ptr;

    printf("Endereço de ptr = %x \n", &ptr);
	printf("Endereço de pptr = %x \n", &pptr);

	printf("Valor ptr = %d \n", *ptr);
	printf("Valor pptr = %d \n", **pptr);


    return 0;
}