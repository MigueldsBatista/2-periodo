#include <stdio.h>

typedef struct 
{
int dia, mes, ano;
}Data;

typedef struct 
{
char nome[50];
Data data_pessoa;
}Pessoa;

typedef struct{
    Pessoa pessoa;
    struct no *proximo;
}No;

Pessoa ler_pessoa(){
    Pessoa pessoa;
    printf("\nDigite o nome e a data de nascimento dd mm aaaa :\n");
    scanf("%49[^\n]%d%d%d", pessoa.nome, &pessoa.data_pessoa.dia, &pessoa.data_pessoa.mes, &pessoa.data_pessoa.ano);
    return pessoa;
}

void imprimir_pessoa(Pessoa pessoa){
    printf("\nNome: %s\nData: %2d/%2d/%4d\n", pessoa.nome, pessoa.data_pessoa.dia, pessoa.data_pessoa.mes, pessoa.data_pessoa.ano);
}

int main(){
No *topo= NULL;
int option;

do
{
    printf("\n1 - Empilhar\n 2 - Desempilhar\n 3 - Imprimir\n 4 - Sair");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        break;
    case 2:
        break;

    case 3:
        break;
        
    case 4:
        break;

    default:
    if (option!=0)
        printf("Opção invalida");
        break;
    }
} while (option!=0);
    return 0;
}