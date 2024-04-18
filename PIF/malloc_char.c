#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Digite o tamanho do array: \n");
    scanf("%d", &size);
    getchar(); // Consome o caractere de nova linha gerado '\n'

    char *array = (char *)malloc((size + 1) * sizeof(char)); // Correção no tamanho do buffer de entrada de fgets
    printf("Digite a string: \n");
    fgets(array, size, stdin);
    printf("A string digitada foi: %s ", array);
    free(array);
    
    return 0;
}
