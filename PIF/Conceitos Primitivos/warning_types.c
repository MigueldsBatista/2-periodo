#include <stdio.h>
#include <windows.h> // Para o Sleep

int main() {
    printf("Este é um exemplo de alerta sonoro: ");
    fflush(stdout); // Garante que a saída seja exibida antes do alerta

    // Soar o alerta
    putchar('\a');
    fflush(stdout); // Garante que o alerta seja exibido imediatamente

    // Esperar um pouco antes de encerrar o programa
    Sleep(2000); // Espera por 2000 milissegundos (equivalente a 2 segundos)

    return 0;
}
