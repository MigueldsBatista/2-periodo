#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char name[20];
    struct no *next;
}No;



void insert_last(No **lista, char anterior[20]){

No *current=*lista;
No *novo=malloc(sizeof(No));
novo->next=NULL;

//E se for o primeiro elemento?
strcpy(novo->name, anterior);
if(*lista==NULL){
    *lista=novo;
}else{
    while (current->next)//!=Null
    {
    current=current->next;
    }current->next=novo;

    
}
}
void insert_middle_and_merge(No **lista, No **new_lista, char anterior[20]) {
    // Verifica se o valor de "anterior" é "nao"
    if (strcmp(anterior, "nao") == 0) {
        
        // Se a lista original estiver vazia, simplesmente atualize-a com a nova lista
        if (*lista == NULL) {
            *lista = *new_lista;
        } else {
            // Encontra o último nó da lista original
            No *last = *lista;
            while (last->next != NULL) {
                last = last->next;
            }
            
            // Insere os elementos da nova lista no final da lista original
            last->next = *new_lista;
        }
        
        // Define a nova lista como NULL para evitar liberar sua memória
        *new_lista = NULL;
    } else {
        // Caso contrário, realiza a inserção normalmente
        
        No *current = *lista;
        No *prev = NULL;

        // Encontra o nó anterior na lista original
        while (current != NULL && strcmp(current->name, anterior) != 0) {
            prev = current;
            current = current->next;
        }

        // Caso o elemento anterior seja o penúltimo, é necessário tratá-lo separadamente
        if (current != NULL && current->next == NULL && strcmp(current->name, anterior) == 0) {
            prev = current;
        }

        // Percorre a segunda lista e insere seus elementos antes do nó de referência na lista original
        No *new_current = *new_lista;
        while (new_current != NULL) {
            No *new_node = malloc(sizeof(No));
            strcpy(new_node->name, new_current->name);
            new_node->next = NULL; // Novo nó será o último da lista
            if (prev != NULL) {
                new_node->next = prev->next;
                prev->next = new_node;
            } else {
                new_node->next = *lista; // Atualiza o início da lista se o elemento anterior for NULL
                *lista = new_node;
            }
            prev = new_node; // Atualiza o nó anterior para o novo nó inserido
            new_current = new_current->next;
        }
    }
}

void print_list(No *lista) {
    No *current = lista;
    while (current) {
        printf("%s ", current->name); // Imprime o nome do nó
        current = current->next;
    }
}

int main()
{
    No *lista=NULL;
    No *new_lista=NULL;
    char anterior[20];
    char input[100];
    int index=0;

    fgets(input, sizeof(input), stdin); // Lê a linha inteira

    // Processa a entrada caractere por caractere
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ' || input[i] == '\n') {
            anterior[index] = '\0'; // Termina a string com '\0'
            if (index > 0) { // Ignora espaços extras
                insert_last(&lista, anterior); // Adiciona o nome à lista
                index = 0; // Reinicia o índice para o próximo nome
            }
        } else {
            anterior[index++] = input[i]; // Adiciona o caractere ao nome
        }
    }


    fgets(input, sizeof(input), stdin);
        for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ' || input[i] == '\n') {
            anterior[index] = '\0'; // Termina a string com '\0'
            if (index > 0) { // Ignora espaços extras
                insert_last(&new_lista, anterior); // Adiciona o nome à nova lista
                index = 0; // Reinicia o índice para o próximo nome
            }
        } else {
            anterior[index++] = input[i]; // Adiciona o caractere ao nome
        }
    }
  
    scanf(" %s", anterior);


    insert_middle_and_merge(&lista, &new_lista, anterior);
    print_list(lista);


    
    return 0;
}
