#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; // Declara um buffer para armazenar a entrada do usuário
    int length, i;

    printf("Digite uma frase: ");
    fgets(input, sizeof(input), stdin); // Lê uma linha de texto do teclado

    length = strlen(input);

    printf("A frase invertida eh: ");
    for (i = length - 1; i >= 0; i--) {
        putchar(input[i]); // Escreve cada caractere da string na tela, começando pelo último
    }
    printf("\n");

    return 0;
}
