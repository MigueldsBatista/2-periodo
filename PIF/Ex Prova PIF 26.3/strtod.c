#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "3.14 is pi";
    char *endptr;
    double number;

    // Converte a parte inicial da string em um número em ponto flutuante
    number = strtod(str, &endptr);

    printf("Número em ponto flutuante: %f\n", number);
    printf("Próximo caractere após o número: '%s'\n", endptr);

    return 0;
}
