#include <stdio.h>
#include <stdlib.h>
int main (){

    int soma,x,y = 0;
    printf("Digite um número:");
    scanf("%i",&x);
    printf("Digite outro número:");
    scanf("%i",&y);
    soma = x+y;
    printf("%i+%i=%i \n",soma);
    return 0;
}