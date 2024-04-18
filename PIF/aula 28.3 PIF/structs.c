#include <stdio.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
void print_separator() {
    printf("-----------------------------------\n");
}



int main()
{
    int size = 0, i, op;
    struct Books book[100];

    while (1)
    {   print_separator();
        printf("\n\nDigite o qããoéue deseja fazer:\n1-Adicionar um Livro\n2-Mostrar livros\n3-Sair\n\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            print_separator();
            printf("Digite o título do livro: ");
            scanf("%s", &book[size].title);
            printf("Digite o autor do livro: ");
            scanf("%s", &book[size].author);
            printf("Digite a categoria do livro: ");
            scanf("%s", &book[size].subject);
            printf("Digite o ID do livro: ");
            scanf("%d", &book[size].book_id);
            print_separator();
            size++; // Incrementa o tamanho do array após adicionar um novo livro
            break;
        case 2:
            printf("\n\nLivros cadastrados:\n\n");
            for (i = 0; i < size; i++)
            {   print_separator();
                printf("Nome do livro: %s\n", book[i].title);
                printf("Autor: %s\n", book[i].author);
                printf("Categoria: %s\n", book[i].subject);
                printf("ID: %d\n", book[i].book_id);
                print_separator();
                printf("\n\n");
            }break;

        case 3:
            return 0;
        default:
            printf("opcao invalida.\n");
            break;
        }
    }

    return 0;
}
