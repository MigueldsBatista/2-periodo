#include <stdio.h>

// Função recursiva para resolver a Torre de Hanoi
void torreDeHanoi(int n, char origem, char auxiliar, char destino) {
    if (n == 1) {
        printf("Mova o disco 1 de %c para %c\n", origem, destino);
        return;
    }
    torreDeHanoi(n - 1, origem, destino, auxiliar);
    printf("Mova o disco %d de %c para %c\n", n, origem, destino);
    torreDeHanoi(n - 1, auxiliar, origem, destino);
}

int main() {
    int n;
    printf("Digite o número de discos: ");
    scanf("%d", &n);
    torreDeHanoi(n, 'A', 'B', 'C');
    return 0;
}
