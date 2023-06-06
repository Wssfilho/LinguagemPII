#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int dia, mes, ano;
    int matricula;

} Tdatas;
typedef struct
{
    char nome[100];
    Tdatas data;

} Tpessoa;
void isect(Tpessoa *a)
{
    printf("Insira o nome: ");
    scanf("%[^\n]s%*c", &a->nome);
}
void header(void)
{
    printf("\t\tBEM VINDO \t\t\n");
    printf("0. Sair\n");
    printf("1. Inserir\n");
    printf("2. Mostrar\n");
    printf("7. Ajuda\n");
}
void ajuda(int *n)
{
    system("clear || cls");
    printf("As ajudas: \n ");
    printf("Deseja voltar ao menu? ");
    scanf("%d", n);
    system("clear || cls");
}
int main(void)
{
    Tpessoa vector;
    int opcao = 0;
    do
    {
        header();
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            isect(&vector);
            printf("%s", vector.nome);
            break;
        case 2:
            break;
        case 7:
            ajuda(&opcao);
            break;
        default:
            break;
        }

    } while (opcao != 0);
}
