#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World \n");
    int x = 0;
    printf("Digite sua idade: \n");
    scanf("%i", &x);
    if (x >= 18){
        printf("Maior de idade! %i\n", x);
    } else {
        printf("Menor de idade! %i\n", x);
    }
    
    int num1, num2 = 0;
    int result = 0;
    printf("Digite um número:\n");
    scanf("%i", &num1); //No scanf tem que colocar o & junto com a varíavel quando for numérica
    printf("Digite outro número: \n");
    scanf("%i", &num2);
    result = num1 + num2;
    printf("%i + %i = %i\n", num1, num2, result);
    
    char nome[10];
    printf ("Digite seu nome: \n");
    scanf("%s", nome);
    printf ("Você digitou %s\n", nome);
    
    float nsal, desc, sal = 0;
    printf("Digite o valor do salário: \n");
    scanf("%f", &sal);
    desc = sal * 0.05;
    nsal = sal - desc;
    printf("O valor do sálario com desconto é: %f\n", nsal);
    
    return 0;
}


