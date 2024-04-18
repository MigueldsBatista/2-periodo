#include <stdio.h>

int main() {
    char buffer[100];
    int number = 10;
    float f = 3.14;

    // Formata e armazena uma string no buffer
    sprintf(buffer, "O numero eh %d e o float eh %.2f", number, f);

    printf("String formatada: %s\n", buffer);

    return 0;
}
