#include<stdio.h>
#include<stdlib.h>

struct dados
{
    char nome[200];
    int idade;
    char cpf[200];
};

int main () {

struct dados fun;
struct dados cli;

printf("Digite dados do Funcionario::::");
printf("Nome:");
gets(fun.nome);

printf("Idade:");
scanf("%d", &fun.idade);
fflush(stdin);

printf("CPF: ");
gets(fun.cpf);

printf("\n Digite os dados do cliente:::: \n");

printf("Nome: ");
gets(cli.nome);

printf("Idade:");
scanf("%d", &cli.idade);
fflush(stdin);

printf("CPF:");
gets(cli.cpf);

 //Exebição

printf("Nome: %s \n",fun.nome);
printf("Idade: %d \n", fun.idade);
printf("CPF: %s \n", fun.cpf);

printf("Nome: %s \n",cli.nome);
printf("Idade: %d \n", cli.idade);
printf("CPF: %s \n", cli.cpf);

return 0;
}