#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct dados
{
    char nome[300];
    char data[200];
    char rg[200];
    char cpf[200];
};



int main () {
 setlocale(LC_ALL, "portuguese");

struct dados pro[5];
 int i;

for (i = 0; i < 5; i++)
{


printf("Digite seu nome:");
gets(pro[i].nome);

printf("Digite sua data de nascimento:");
gets(pro[i].data);

printf("Digite seu RG:");
scanf("%s", &pro[i].rg);

printf("Digite seu CPF:");
scanf("%s", &pro[i].cpf);


fflush(stdin);
}

for (i = 0; i < 5; i++)
{
printf("Seu nome: %s \n", pro[i].nome);
    printf("Data de nascimento: %s \n", pro[i].data);
        printf("Seu RG: %d \n", pro[i].rg);
            printf("Seu CPF: %d \n", pro[i].cpf);
}




    return 0;
}