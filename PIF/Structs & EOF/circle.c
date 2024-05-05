#include <stdio.h>

#define PI 3.14159

// Definição da estrutura Circle
struct Circles{
    float x; // coordenada x do centro do círculo
    float y; // coordenada y do centro do círculo
    float raio; // raio do círculo
};

int main() {
    struct Circles circle;

    // Leitura dos dados do círculo
    printf("Digite as coordenadas (x, y) do centro do círculo: ");
    scanf("%f %f", &circle.x, &circle.y);

    printf("Digite o raio do círculo: ");
    scanf("%f", &circle.raio);

    // Exibindo os dados do círculo
    printf("\nDados do círculo:\n");
    printf("Centro: (%.2f, %.2f)\n", circle.x, circle.y);
    printf("Raio: %.2f\n", circle.raio);
    printf("Área: %.2f\n", PI * circle.raio * circle.raio);
    printf("Circunferência: %.2f\n", 2 * PI * circle.raio);

    return 0;
}
