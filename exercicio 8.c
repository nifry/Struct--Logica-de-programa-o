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
        printf("\n Dados do Funcion�rio \n \n");

        printf("Nome:");
        gets(fun[i].nome);

        printf("Data de emiss�o:");
        gets(fun[i].data);

        printf("Matricula:");
        gets(fun[i].matricula);

        printf("Endere�o:");
        gets(fun[i].endereco);
    }
    for (j = 0; j < 2; j++)
    {
        printf("\n Dados do Cliente \n \n");

        printf("Nome:");
        gets(cli[j].nome);

        printf("Data de emiss�o:");
        gets(cli[j].data);

        printf("Endere�o:");
        gets(cli[j].endereco);
    }

    // Exebição
    for (i = 0; i < 2; i++)
    {
        printf("%d� Funcion�rio", i + 1);
        printf("Nome: %s \n", fun[i].nome);
        printf("Data de emiss�o: %s \n", fun[i].data);
        printf("Matricula: %s \n", fun[i].matricula);
        printf("Endere�o: %s \n", fun[i].endereco);
    }
    for (j = 0; j < 2; j++)
    {
        printf("%d� Cliente", j + 1);
        printf("Nome: %s \n", cli[j].nome);
        printf("Data de emiss�o: %s \n", cli[j].data);
        printf("Endere�o: %s \n", cli[j].endereco);
    }
    return 0;
}