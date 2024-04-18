#include <stdio.h>

int main() {
    char str[] = "10 3.14";
    int number;
    float f;

    // Lê os dados formatados da string
    sscanf(str, "%d %f", &number, &f);

    printf("Número lido: %d\n", number);
    printf("Float lido: %.2f\n", f);

    return 0;
}
