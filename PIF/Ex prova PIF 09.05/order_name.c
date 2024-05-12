#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição do nó
typedef struct No {
    char nome[100];
    struct No* proximo;
} No;

// Função para inserir um nome em ordem alfabética
void inserir_em_ordem(No** lista, const char* nome_inserido) {
    // Criar um novo nó
    No* novo = malloc(sizeof(No));
    if (novo) {
        // Copiar o nome para o nó
        strncpy(novo->nome, nome_inserido, sizeof(novo->nome));
        novo->nome[sizeof(novo->nome) - 1] = '\0';  // Certificar-se de que está terminado por nulo

        // Se a lista estiver vazia, adicione o novo nó como o primeiro elemento
        if (*lista == NULL) {
            novo->proximo = NULL;
            *lista = novo;

        // Se o novo nome for menor que o primeiro elemento da lista, insira no início
        } else if (strcmp(novo->nome, (*lista)->nome) < 0) {
            novo->proximo = *lista;
            *lista = novo;

        // Caso contrário, insira no meio ou no final da lista
        } else {
            No* atual = *lista;
            while (atual->proximo && strcmp(novo->nome, atual->proximo->nome) > 0) {
                atual = atual->proximo;
            }
            novo->proximo = atual->proximo;
            atual->proximo = novo;
        }
    } else {
        printf("Erro ao alocar memória\n");
    }
}

// Função para imprimir a lista
void imprimir_lista(const No* lista) {
    const No* atual = lista;
    while (atual) {
        printf("%s -> ", atual->nome);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

// Função principal para testar a inserção
int main() {
    No* lista = NULL;

    inserir_em_ordem(&lista, "Carlos");
    inserir_em_ordem(&lista, "Alice");
    inserir_em_ordem(&lista, "Bruno");
    inserir_em_ordem(&lista, "Daniel");

    imprimir_lista(lista);

    return 0;
}
