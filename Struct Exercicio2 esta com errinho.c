#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (){

setlocale(LC_ALL, "portuguese");

struct  dados
{
    char nome[1000];
    int idade;
    char endereco[1000];
};

struct dados pes;

//Solicitando dados a seguir

printf("Digite seu nome: \n");
gets(pes.nome);

printf("Digite sua idade: \n");
scanf("%d", &pes.idade);

printf("Digite seu endereço: \n");
gets(pes.endereco);


//Exibição final 

printf("Digite seu nome: %d \n", pes.nome);
printf("Digite sua idade: %d \n", pes.idade);
printf("Digite seu endereço %d \n", pes.endereco);

    return 0;
}