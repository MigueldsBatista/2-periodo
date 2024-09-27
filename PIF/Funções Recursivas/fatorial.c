#include <stdio.h>
#include <stdlib.h>
int chamada=0;
// Função recursiva para calcular o fatorial de um número
int fatorial(int x) {

    // Caso base: se x é 0 ou 1, retorna 1 (0! = 1 e 1! = 1)
    if(x == 1 || x == 0) {
        chamada++;

        return 1;
    }
    else { 
        // Caso recursivo: x * fatorial(x - 1)
        // Primeira Chamada: fatorial(5)
        // x não é 0 ou 1, então faz a chamada recursiva 5 * fatorial(4)
        
        // Segunda Chamada: fatorial(4)
        // x não é 0 ou 1, então faz a chamada recursiva 4 * fatorial(3)
        
        // Terceira Chamada: fatorial(3)
        // x não é 0 ou 1, então faz a chamada recursiva 3 * fatorial(2)
        
        // Quarta Chamada: fatorial(2)
        // x não é 0 ou 1, então faz a chamada recursiva 2 * fatorial(1)
        
        // Quinta Chamada: fatorial(1)
        // x é 1, então retorna 1.

        // Momento de Inversão
        // A inversão acontece quando a condição base é atingida e as funções começam a retornar.
        // Aqui, fatorial(1) atinge a condição base e retorna 1.
        // A partir desse ponto, as funções começam a retornar e multiplicar os resultados intermediários.
        chamada++;
        return x * fatorial(x - 1);
    }
}

int main() {
    int x;
    // Pede ao usuário para digitar um número
    printf("digite um numero para saber seu fatorial: ");
    scanf("%d", &x);
    
    // Calcula e imprime o fatorial do número digitado
    printf("%d \t", fatorial(x));
    printf("%d", chamada);

    // Retorno da Quinta Chamada:
    // fatorial(1) retorna 1
    // A Quarta Chamada se torna 2 * 1 e retorna 2

    // Retorno da Quarta Chamada:
    // fatorial(2) retorna 2
    // A Terceira Chamada se torna 3 * 2 e retorna 6

    // Retorno da Terceira Chamada:
    // fatorial(3) retorna 6
    // A Segunda Chamada se torna 4 * 6 e retorna 24

    // Retorno da Segunda Chamada:
    // fatorial(4) retorna 24
    // A Primeira Chamada se torna 5 * 24 e retorna 120

    // Retorno da Primeira Chamada:
    // fatorial(5) retorna 120

    // Portanto, a sequência completa de chamadas e retornos para fatorial(5) é:
    // fatorial(5) -> 5 * fatorial(4)
    // fatorial(4) -> 4 * fatorial(3)
    // fatorial(3) -> 3 * fatorial(2)
    // fatorial(2) -> 2 * fatorial(1)
    // fatorial(1) -> 1

    return 0; // Termina o programa
}
