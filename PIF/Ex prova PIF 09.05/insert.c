#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
int valor;
struct no *proximo;
}No;

void insert_first(No **lista, int valor_inserido){
No *novo=malloc(sizeof(No));
if(novo){
(*novo).valor=valor_inserido;//o valor do ponteiro 
(*novo).proximo=*lista;//o proximo elemento recebe o valor do primeiro elemento
*lista=novo;//o ponteiro do primeiro elemento recebe novo    
}else printf("erro ao alocar memoria");

}

void print_list(No *lista){
int i=0;    
No *current=lista;
while (current)
{
   
    printf("\n\tvalor (%d): %d \n",i, (*current).valor);
    current=(*current).proximo;
    i++;
}

}
void insert_last(No **lista, int valor_inserido){
No *current=malloc(sizeof(No));
No *novo=malloc(sizeof(No));

if(novo){

novo->valor=valor_inserido;
novo->proximo=NULL;//Temos certeza que é o ultimo
//E se for o primeiro elemento?

if(*lista==NULL){
    *lista=novo;
}

else{
current=*lista;//current recebe o valor do primeiro elemento da lista 
while (current->proximo){//!=NULL

current=current->proximo;
}   
current->proximo=novo;

}
}else printf("erro ao alocar memoria");
}

void insert_middle(No **lista, int valor_inserido, int anterior){
No *novo=malloc(sizeof(No));
No *current=malloc(sizeof(No));
if(novo){
novo->valor=valor_inserido;//Novo vale o valor inserido
//E se for o primeiro?
if(*lista==NULL){
*lista=novo;
novo->proximo=NULL;

//ONDE ESTÁ O ANTERIOR?
}else{
current=*lista;
while(current->valor!=anterior&&current->proximo){//
    current=current->proximo;//PERCORRER A LISTA
    //FIM DO LOOP
    
}   novo->proximo=current->proximo;//o ponteiro novo vai ser preenchido com o valor do proximo valor de current
    current->proximo=novo;//o próximo numero depois do loop chegar no anterior é o novo valor inserido
}

}else printf("erro ao alocar memoria");


}

void insert_ordered(No **lista, int valor_inserido){
No *novo = malloc(sizeof(No));
if(novo){
novo->valor=valor_inserido;
//A lista está vazia?
if(*lista==NULL){
    novo->proximo=NULL;
    *lista=novo;

//É O MENOR DO QUE O VALOR INICIAL DA LISTA?

}else if(novo->valor < (*lista)->valor){
    (novo->proximo)=*lista;
    *lista=novo;
//QUAL É O PRIMEIRO MENOR VALOR DA LISTA QUE É MENOR QUE O NOSSO?
}else{
    No *current=malloc(sizeof(No));
    current=*lista;
    while(current->proximo && (novo->valor) > (current->proximo->valor)){
        current=current->proximo;
    }
    (novo->proximo)=(current->proximo);
    (current->proximo)=novo;
}

}else printf("erro ao alocar memoria");
}


No* remove_value(No **lista, int valor_removido){
No *remover=NULL;
No *current=NULL;

if(*lista)
    {

//É o primeiro?
    if((*lista)->valor==valor_removido)
    {
        remover=*lista;
    }
    else{
    current=*lista;
    while((current->proximo)&&(current->proximo->valor!=valor_removido)){
        current=current->proximo;
        }
        if(current->proximo){
            remover=current->proximo;
            current->proximo=remover->proximo;

        }
        }
    }
return remover;
}

int main()
{
    No *lista=NULL;
    No *remover=NULL;//IMPORTANTE
    
    insert_first(&lista, 3);//3
    insert_first(&lista, 4);//2
    insert_first(&lista, 5);//1
    insert_first(&lista, 6);//0
    insert_last(&lista, 2);
    insert_middle(&lista, 7, 3);
    remover=remove_value(&lista, 8);
    free(remover);
    
    print_list(lista);//

    return 0;
}
