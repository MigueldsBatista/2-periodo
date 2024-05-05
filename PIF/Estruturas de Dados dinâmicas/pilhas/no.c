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
    Pessoa ptr;
    struct no *proximo;
}No;

Pessoa ler_pessoa(){
    Pessoa ptr;
    printf("\nDigite o nome e a data de nascimento dd mm aaaa :\n");
    scanf("%49[^\n]%d%d%d", ptr.nome, &ptr.data_pessoa.dia, &ptr.data_pessoa.mes, &ptr.data_pessoa.ano);
    return ptr;
}