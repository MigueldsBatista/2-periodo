#include <stdlib.h>
#include <stdio.h>
  typedef struct no {//typedef é usado para criar um sinonimo para essa estrutura
        int valor;
        struct no *prox;//ponteiro de struct para o proximo elemento
    }No;//Nome que é usado como sinonimo dessa struct

void insert_first(No **lista, int num){//Precisamos de um ponteiro para ponteiro que aponta para o inicio da lista
    No *novo = malloc(sizeof(No));//cria uma struct de novo no
    if(novo){
        (*novo).valor = num;//*novo é um ponteiro para o inicio da lista
        (*novo).prox = *lista;//*lista que antes era o inicio agora é o segundo elemento
        *lista = novo; // O novo nó se torna o início da lista
    }else{
        printf("erro ao alocar memoria");
    }
}

void print_list(No *lista){
    No *current = lista;
    printf("Lista: ");
    while(current){
        printf("%d ", (*current).valor);
        current=(*current).prox;   
    }
     printf("end");
}


int main()
{
  
    No *lista=NULL;//inicio da lista é nulo
    insert_first(&lista, 1);
    insert_first(&lista, 2);
    insert_first(&lista, 3);
    print_list(lista);


    //inserir no inicio
    return 0;
}
