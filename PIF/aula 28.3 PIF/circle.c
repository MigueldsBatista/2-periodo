#include <stdio.h>

#define PI 3.14159

// Defini��o da estrutura Circle
struct Circles{
    float x; // coordenada x do centro do c�rculo
    float y; // coordenada y do centro do c�rculo
    float raio; // raio do c�rculo
};

int main() {
    struct Circles circle;

    // Leitura dos dados do c�rculo
    printf("Digite as coordenadas (x, y) do centro do c�rculo: ");
    scanf("%f %f", &circle.x, &circle.y);

    printf("Digite o raio do c�rculo: ");
    scanf("%f", &circle.raio);

    // Exibindo os dados do c�rculo
    printf("\nDados do c�rculo:\n");
    printf("Centro: (%.2f, %.2f)\n", circle.x, circle.y);
    printf("Raio: %.2f\n", circle.raio);
    printf("�rea: %.2f\n", PI * circle.raio * circle.raio);
    printf("Circunfer�ncia: %.2f\n", 2 * PI * circle.raio);

    return 0;
}
