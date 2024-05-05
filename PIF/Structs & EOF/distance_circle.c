#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Definição da estrutura Circle
struct Circles{
    float x; // coordenada x do centro do círculo
    float y; // coordenada y do centro do círculo
    float raio; // raio do círculo
};

int main() {
    struct Circles circle;
    struct Circles circle_2;
    float distance;
    // Leitura dos dados do círculo
    printf("Digite as coordenadas (x, y) do centro do círculo 1: ");
    scanf("%f %f", &circle.x, &circle.y);

    printf("Digite o raio do círculo 1: ");
    scanf("%f", &circle.raio);

     printf("Digite as coordenadas (x, y) do centro do círculo 2: ");
    scanf("%f %f", &circle_2.x, &circle_2.y);

    printf("Digite o raio do círculo 2: ");
    scanf("%f", &circle_2.raio);

    distance=sqrt(pow((circle_2.x-circle.x), 2)+pow((circle_2.y-circle.y), 2));
    printf("Distancia: %.2f", distance);
    return 0;
}
