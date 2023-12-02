#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct dadosalu
{
    char nome[200];
    int numero[200];
    char idade[200];
    float nota[2][200];
    float media[3];
};

struct dadospro
{
    char nome[200];
    char disciplina[2][200];
    char turma[2][200];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dadosalu alu[3];
    struct dadospro pro[2];
    int i, j;
    float somanotas = 0;


    for (i = 0; i < 3; i++)
    {
        printf("\n Dados do Aluno \n \n");


        printf("N˙mero da turma:");
        gets(alu[i].numero);

        printf("Nome:");
        gets(alu[i].nome);
        
        printf("Idade:");
        scanf("%d", &alu[i].idade);

        printf("%d∞ Nota:");
        scanf("%f", &alu[i].nota[2]);
    
        somanotas = alu[i].nota[j];
    }    
    for (j = 0; j < 2; j++)
    {
        printf("\n Dados do Professor \n \n");

        printf("Nome:");
        gets(pro[j].nome);

        printf("DDisciplina:");
        gets(pro[j].disciplina[2]);

        printf("EndereÁo:");
        gets(pro[j].turma[2]);
    }


    alu[i].media[i] = somanotas / j;
    somanotas = 0;


    if (alu[i].media >= 7)
    {
        printf("Aprovado");
    } else{
        printf("Reprovado");
    }


    // Exebi√ß√£o
    for (i = 0; i < 3; i++)
    {
        printf("%d∫ Aluno", i + 1);
        printf("N˙mero da turma: %d \n", alu[i].numero);
        printf("Nome: %s \n", alu[i].nome);
        printf("Idade: %d \n", alu[i].idade);
        printf("Nota: %.2f \n", alu[i].nota[j]);
        printf("MÈdia: %.1f \n", alu[i].media[i]);
    }
    for (j = 0; j < 2; j++)
    {
        printf("%d∫ Professor", j + 1);
        printf("Nome: %s \n", pro[j].nome);
        printf("Disciplina: %s \n", pro[j].disciplina[j]);
        printf("Turma: %s \n", pro[j].turma[j]);
    }
    return 0;
}