#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    char name[20];
    struct no *next;
}No;

void insert_in_order(No **lista, char new_name[20]){
    No *novo = malloc(sizeof(No));
    No *current=*lista;//Estou trabalhando com strings, não posso fazer copias com =, isso só se aplica a numeros

    strcpy(novo->name, new_name);

    //A lista está vazia?
    if(*lista==NULL){
        *lista=novo;
        novo->next=NULL;
    }

    //é menor que o primeiro elemento da lista?
    else if(strcmp(novo->name,  current->name)<0){
        novo->next=*lista;//segundo valor recebe o valor do inicio da lista
        *lista=novo;//inicio da lista recebe o novo valor
    }

    else{    //Onde está o numero anterior ao menor numero menor que o nosso
    while(current->next && strcmp(novo->name, current->next->name)>0){
        current=current->next;
    }
    novo->next=current->next;
    current->next=novo;

    }
}
void print_list(No *lista){
    No* current=lista;
    while(current){
        printf("%s\n", current->name);
        current=current->next;
    }
}
int main(){
    char name[20];
    char behave;
    int good=0;
    int bad=0;
    int tests;
    int i;
     //nao posso ter uma variavel tests
    No *lista = NULL;
    scanf("%d", &tests);

    for(i=0;i<tests;i++){
        scanf(" %c %s", &behave, name);

        if(behave == '+') {good += 1;}
            

        else if(behave == '-') {bad += 1;}

        insert_in_order(&lista, name);
    }
    print_list(lista);
    printf("Se comportaram: %d | Nao se comportaram: %d", good, bad);


    return 0;
}