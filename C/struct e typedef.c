
#include <stdio.h>
#include <stdlib.h>

//redefinindo o nome dos valores básicos
typedef float nota;  
typedef int inteiro;

struct Aluno
{
    inteiro mat;    //int mat;      < A definição seria assim, mas  
    nota prova1;    //float prova1;     o typedef renomeia o tipo da variável > 
    nota prova2;    //float prova2;
};
typedef struct Aluno Aluno; //O typedef encurta o nome da struct nesse caso
int main(void)
{
    Aluno lucas; //Sem o typedef, aqui precisaria utilizar struct antes de Aluno
    nota media =0;    //float media = 0;
    
    printf("Digite a matrícula: \n");
    scanf("%i",&lucas.mat);
    printf("Digite a nota da primeira prova: \n");
    scanf("%f",&lucas.prova1);
    printf("Digite a nota da segunda prova: \n");
    scanf("%f",&lucas.prova2);
    
    media = (lucas.prova1 + lucas.prova2)/2;
    
    printf("Matrícula: %i \n",lucas.mat);
    printf("Média do aluno é: %.2f \n",media);
    
    return 0;
}
