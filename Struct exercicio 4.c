#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


struct infor
{
    char nome[400];
    int idade;
    float nota[2];
};
int main () {

struct infor net[3];
int i, j;

//Solicitando dados

for(i=0; i < 3; i++){

printf("Digite seu nome:");
    gets(net[i].nome);

printf("Digite sua idade:");
    scanf("%d", &net[i].idade);

for (j = 0; j < 2; j++)
{
    printf("Digite sua nota:");
        scanf("%f", &net[i].nota[j]);
}

fflush(stdin);

}

//Imprimir ou exebição

for(i=0; i < 3; i++){
    printf("Nome: %s \n",net[i].nome); 
    printf("Idade: %d \n",net[i].idade);
 
 for (j = 0; j < 2; j++)
    printf("Notas: %.1f \n",net[i].nota[j]);
}

    return 0;
}