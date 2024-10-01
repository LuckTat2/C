#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, temp, temp2;
    char sair[2] = "n";   //Sempre tem que deixar um espaço em branco em vetor char
    int matric;
    int notas[5];
    int alunos[3];
    float media[3];
    
    for (i = 0; i < 3; i++) {
        printf("Digite a matrícula do aluno: ");
        scanf("%i", &alunos[i]);
        printf("Digite as notas do aluno: ");
        for (j = 0; j < 5; j++) {   //Com 2 for aninhados, precisam ter índices de contador diferentes, i e j no caso
            scanf("%i", &notas[j]);
        }
        media[i] = (float)(notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;
    }
    
    while (strcmp(sair, "s") != 0) {    
        printf("Digite a matrícula do aluno a ser pesquisado: ");
        scanf("%i", &matric);
        int encontrado = 0; // Variável para verificar se o aluno foi encontrado
        
        for (i = 0; i < 3; i++) {
            if (matric == alunos[i]) {
                printf("%i Notas do aluno: %i %i %i %i %i\n", alunos[i], notas[0], notas[1], notas[2], notas[3], notas[4]);
                printf("Média do aluno: %.2f\n", media[i]);
                encontrado = 1; // Define como 1 se o aluno for encontrado
                break; // Sai do loop após encontrar o aluno
            }
        }
        
        if (!encontrado) {
            printf("Aluno com matrícula %i não encontrado.\n", matric);
        }
        
        printf("Deseja pesquisar de novo? Para sair, digite 's': ");
        scanf("%s", sair);
    }
    
    for (i = 0; i < 3; i++) {
        if (media[i] >= 7) {
            printf("%i está aprovado com média %.2f\n", alunos[i], media[i]);
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3 - i - 1; j++) {
            if (media[j] > media[j + 1]) {
                temp = media[j];
                media[j] = media[j + 1];
                media[j + 1] = temp;

                temp2 = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp2;
            }
        }
    }
    
    printf("Alunos ordenados por média:\n");
    for (i = 0; i < 3; i++) {
        printf("Matrícula: %i, Média: %.2f\n", alunos[i], media[i]);
    }
    
    return 0;
}