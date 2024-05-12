#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char name[20];
    struct no *next;
}No;



void insert_last(No **lista, char new_name[20]){

No *current=*lista;
No *novo=malloc(sizeof(No));
novo->next=NULL;

//E se for o primeiro elemento?
strcpy(novo->name, new_name);
if(*lista==NULL){
    *lista=novo;
}else{
    while (current->next)//!=Null
    {
        current=current->next;
    }current->next=novo;

    
}
}

void insert_middle(No **lista, char new_name[20], char anterior[20]){
    No *novo=malloc(sizeof(No));
    No *current=malloc(sizeof(No));
    
    strcpy(novo->name, new_name);
    if (*lista==NULL){
        *lista=novo;
        novo->next=NULL;
    }
    else{
        current=*lista;
        while(strcmp(current->next, anterior)!=0 && current->next!=NULL){
            current=current->next;
        }novo->next=current->next;
        current->next=novo;
    }
}

void print_list(No *lista) {
    No *current = lista;

    while (current) {
        printf("%s\n", current->name);
        current = current->next;
    }
}

int main()
{
    No *lista=NULL;
    //No *new_lista=NULL;
    char new_name[20];
    char input[100];
    int index=0;
    printf("Digite os amigos atuais:\n");
    fgets(input, sizeof(input), stdin); // Lê a linha inteira

    // Processa a entrada caractere por caractere
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ' || input[i] == '\n') {
            new_name[index] = '\0'; // Termina a string com '\0'
            if (index > 0) { // Ignora espaços extras
                insert_last(&lista, new_name); // Adiciona o nome à lista
                index = 0; // Reinicia o índice para o próximo nome
            }
        } else {
            new_name[index++] = input[i]; // Adiciona o caractere ao nome
        }
    }

    print_list(lista);

/*
    printf("nova lista de amizades");
    fgets(input, sizeof(input), stdin);
        for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ' || input[i] == '\n') {
            new_name[index] = '\0'; // Termina a string com '\0'
            if (index > 0) { // Ignora espaços extras
                insert_last(&new_lista, new_name); // Adiciona o nome à nova lista
                index = 0; // Reinicia o índice para o próximo nome
            }
        } else {
            new_name[index++] = input[i]; // Adiciona o caractere ao nome
        }
    }
    scanf(" %s", new_name);
*/


    
    return 0;
}
