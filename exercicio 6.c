#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct dados_aluno {
    char nome[200];
    int idade;
    float notas[2];
    float media;
};

int main() {

    setlocale(LC_ALL,"portugese");
    
    struct dados_aluno aluno[3];
    int i, j;
    float somaNotas = 0;
   
    for (i =0; i < 3; i++) {
        printf("\nDigite os dados do %dº aluno: ", i + 1);
        printf("Nome: ");
        gets(aluno[i].nome);
       
        printf("Idade: ");
        scanf("%d",&aluno[i].idade);
   
        for (i =0; i < 2; i++) {    
            printf("%dª nota: ", j + 1);
            scanf("%d",&aluno[i].notas[j]);
           
            somaNotas = aluno[i].notas[j];
        }
       
        aluno[i].media = somaNotas / j;
        somaNotas = 0;
    }
   
    printf("\nExibindo dados dos alunos... \n ");
   
    for (i =0; i < 3; i++) {
        printf("\nDados do %dº aluno: ", i + 1);
        printf("Nome: %s \n", aluno[i].nome);
        printf("Nome: %d \n", aluno[i].idade);
       
        for (j =0; j < 2; j++) {
            printf("%dª nota: %.2f \n", j + 1, aluno[i].notas[j]);
        }
       
        printf("Media: %.2f \n", aluno[i].media);
    }
   
    return 0;
}