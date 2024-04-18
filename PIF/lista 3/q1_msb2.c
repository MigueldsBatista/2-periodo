#include <stdio.h>

int verificar(int n) {
    if (n % 7 == 0)
        return 1; 

    while (n) {
        int r = n % 10; // Obtém o último dígito do número
        n = n/10; // Remove o último dígito do número caso 7 não seja encontrado de primeira
        if (r == 7) return 1; // Retorna 1 se encontrar o dígito 7
        return 0;

    }
}
int main() {
    int n, m, k, atual, sentido;

    while (1) {
        // Lê os valores de n(numero de jogadores), m(jogador que vai contar a palma) e k(numero da palma)
        scanf("%d %d %d", &n, &m, &k);

        if (n == 0 && m == 0 && k == 0) {
            break;
        }

        // Inicialização de variáveis para simulação do movimento
        int p = 1; // Posição inicial
        atual = 0; // Inicializa o número atual
        sentido = 1; // Inicializa o sentido do movimento

        // Loop para simular o movimento e encontrar o k-ésimo número que atenda à condição
        while (1) {
            atual++; 

            // Verifica se o número atual atende à condição
            if (p == m && verificar(atual)) {
                k--; // Decrementa o contador k
                if (k == 0) { // Se k alcançar 0, imprime o número atual e termina o loop
                    printf("%d\n", atual);
                    break;
                }
            }

            // Atualiza a posição para o próximo movimento
            p = p + sentido;

            // Verifica se a posição ultrapassou os limites e ajusta o sentido do movimento
            if (p > n) {
                p = n - 1;
                sentido = -1; // Inverte o sentido para voltar
            } else if (p == 0) {
                p = 2;//O ultimo player foi o 1 logo o proximo quando volta é o 2, por isso p=2
                sentido = 1; 
            }
        }
    }

    return 0;
}