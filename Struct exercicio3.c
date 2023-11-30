#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct obrali
{
    char nome[300], autor[300], categoria[300];
    float preco;
};

int main () {

setlocale(LC_ALL, "portuguese");

struct obrali livro [3];
int i;

for (i = 0; i < 3; i++)
{
    printf( "Digite o nome do livro: \n");
        gets(livro[i].nome);

    printf("Digite o nome do autor: \n");
        gets(livro[i].autor);

    printf("Digite o nome da categoria: \n");
        gets(livro[i].categoria);

    printf("Digite o preço do livro: \n");
        scanf("%f", &livro[i].preco);
        
        fflush(stdin);
}

for (i = 0; i < 3; i++)
{
printf("Nomes dos livros: %s \n", livro[i].nome);
    printf("Nomes dos autores: %s \n", livro[i].autor);
        printf("Nomes das categorias: %s \n", livro[i].categoria);
            printf("Preços dos livros: %.3f \n", livro[i].preco);
}

    return 0;
}