#include <stdio.h>

// Função para calcular o quadrado e o cubo de um número
void calcularQuadradoCubo(int num, int *quadrado, int *cubo) {
    *quadrado = num * num; // Armazena o quadrado na variável apontada por quadrado
    *cubo = num * num * num; // Armazena o cubo na variável apontada por cubo
}

int main() {
    int numero = 5;
    int quadrado, cubo;

    // Chamada da função e passagem dos endereços das variáveis quadrado e cubo
    calcularQuadradoCubo(numero, &quadrado, &cubo);

    // Exibe os resultados
    printf("O quadrado de %d é: %d\n", numero, quadrado);
    printf("O cubo de %d é: %d\n", numero, cubo);

    return 0;
}