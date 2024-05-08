#include <stdio.h>
#include <stdlib.h>

struct no{
  int valor;
  struct no *proximo;
}; //celulas da minha lista

void printList(struct no *aux);
void add_node(struct no **aux, int valor);
void delete_node(struct no **aux);

int main(void) {

  struct no *aux = NULL;
  struct no *novo = NULL;
  int i;

  //aux = (struct no *)malloc(sizeof(struct no));
  //aux->valor = 1; //array[0] = 1
  //aux->proximo = NULL; //primeiro elemento da lista

  //printf("Lista encadeada\n");
  //printList(aux);

  for(i=0;i<5;i++){ //insercao
    add_node(&aux,i+3);
  }

  printf("Nova lista encadeada %p\n", aux);
  printList(aux);

  for(i=0;i<5;i++){
   delete_node(&aux);
 }
  
  printf("Outra lista encadeada\n");
  printList(aux);

  return 0;
}

//imprime os elementos da lista
void printList(struct no *aux){
  struct no *n = aux;
  while(n!= NULL){
    printf(" %d ",n->valor);
    n = n -> proximo;
  }
  printf("\n");
}

void add_node(struct no **aux, int valor){ //insercao de elementos no final da lista
  if(*aux == NULL){ //verifica se lista esta vazia

    *aux = (struct no *) malloc(sizeof(struct no));
    (*aux)->valor = valor;
    (*aux)->proximo = NULL;

  }else{
    struct no *n = *aux;
    while(n->proximo != NULL){//final da lista
    n = n->proximo;
   }

  n->proximo = (struct no *) malloc(sizeof(struct no)); //novo
  n->proximo->valor = valor;
  n->proximo->proximo = NULL;
  }
  
}

//remove elementos no final da lista
void delete_node(struct no **aux){
  struct no *n = *aux;
  struct no *remover;

   if(*aux == NULL){
     printf("lista vazia\n");
     return;
   }else if(n->proximo == NULL){
    free(*aux);
    *aux = NULL;
  }else{
     while(n->proximo->proximo != NULL){
     n = n->proximo;
    }
   remover = n->proximo; 
   n->proximo = n->proximo->proximo;
   free(remover);
 }
  
}

