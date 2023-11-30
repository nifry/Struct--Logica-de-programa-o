#include<stdio.h>
#include<stdlib.h>

int main () {

struct dados
{
    char nome [1000];
    int idade;
};

printf("\n Solicitando nome e idade \n \n ");

struct dados aluno;

printf("Digite seu nome:");
gets(aluno.nome);

printf("Digite sua idade:");
scanf("%d", &aluno.idade);


//Exibição

printf("Nome : %s \n", aluno.nome);
printf("Idade: %d \n", aluno.idade);

    return 0;
}