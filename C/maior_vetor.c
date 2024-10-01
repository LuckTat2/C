#include <stdio.h>
#include <stdlib.h>
int main()
{
    int maior = 0;
    int i;
    int vetor[10];
    printf ("Digite os valores do vetor: \n");
    for (int i=0; i<10; i++){
    scanf ("%i", &vetor[i]);	
    }
    maior = vetor [0];
    for (int i=0;i < 10; i++){
        if (vetor[i] > maior){
	    maior = vetor[i];
        }
    }
    printf ("Os dados do vetor são: ");
    for (int i=0; i < 10; i++){
       printf ("%i \n", vetor[i]); 
    }
    printf("O maior valor desse vetor é: %i \n", maior);
    return 0;
}