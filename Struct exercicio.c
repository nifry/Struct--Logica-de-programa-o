#include<stdio.h>
#include<stdlib.h>

int main () {

struct dados
{
    char nome[1000];
    int idade;
    float peso;
    float altura;
};

struct dados Infor;

printf("Digite seu nome:");
gets(Infor.nome);

printf("Digite sua idade:");
scanf("%d", &Infor.idade);

printf("Digite seu peso:");
scanf("%f", &Infor.peso);

printf("Digite sua altura:");
scanf("%f", &Infor.altura);


printf("\n Digite seu nome: %s \n", Infor.nome);
printf("\n Digite sua idade: %d \n", Infor.idade);
printf("\n Digite seu peso: %.2f \n", Infor.peso);
printf("\n Digite sua altura: %.2f \n",Infor.altura);
    return 0;
}