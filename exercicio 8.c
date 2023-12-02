#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct dadosfun
{
    char nome[200];
    char data[200];
    char matricula[200];
    char endereco[200];
};

struct dadoscli
{
    char nome[200];
    char data[200];
    char endereco[200];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dadosfun fun[2];
    struct dadoscli cli[2];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        printf("\n Dados do Funcionário \n \n");

        printf("Nome:");
        gets(fun[i].nome);

        printf("Data de emissão:");
        gets(fun[i].data);

        printf("Matricula:");
        gets(fun[i].matricula);

        printf("Endereço:");
        gets(fun[i].endereco);
    }
    for (j = 0; j < 2; j++)
    {
        printf("\n Dados do Cliente \n \n");

        printf("Nome:");
        gets(cli[j].nome);

        printf("Data de emissão:");
        gets(cli[j].data);

        printf("Endereço:");
        gets(cli[j].endereco);
    }

    // ExebiÃ§Ã£o
    for (i = 0; i < 2; i++)
    {
        printf("%dº Funcionário", i + 1);
        printf("Nome: %s \n", fun[i].nome);
        printf("Data de emissão: %s \n", fun[i].data);
        printf("Matricula: %s \n", fun[i].matricula);
        printf("Endereço: %s \n", fun[i].endereco);
    }
    for (j = 0; j < 2; j++)
    {
        printf("%dº Cliente", j + 1);
        printf("Nome: %s \n", cli[j].nome);
        printf("Data de emissão: %s \n", cli[j].data);
        printf("Endereço: %s \n", cli[j].endereco);
    }
    return 0;
}