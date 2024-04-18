#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "12345 is a number";
    char *endptr;
    long int number;

    // Converte a parte inicial da string em um número inteiro
    number = strtol(str, &endptr, 10); // Base 10

    printf("Número inteiro: %ld\n", number);
    printf("Próximo caractere após o número: '%s'\n", endptr);

    return 0;
}
