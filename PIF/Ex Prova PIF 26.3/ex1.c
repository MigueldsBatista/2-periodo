#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char phrase[100];
    int A, B, C, i = 0;

    printf("Digite uma string de ate 99 caracteres: ");
    fgets(phrase, 100, stdin);

    printf("Digite o Valor de A(right), B(left), C(right) para: ");
    scanf("%d %d %d", &A, &B, &C);

    while (phrase[i] != '\0')
    {
        char ch = phrase[i];
        // Aplicar deslocamento A ESQUERDA

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = (ch - 'A' + A) % 26 + 'A'; // ch-'A'

            // Aplicar deslocamento B
            ch = (ch - 'A' - B + 26) % 26 + 'A';

            // Aplicar deslocamento C
            ch = (ch - 'A' + C) % 26 + 'A';
        }

        else if (ch >= 'a' && ch <= 'z')
        {

            ch = (ch - 'a' + A) % 26 + 'a';

            // Aplicar deslocamento B
            ch = (ch - 'a' - B+26) % 26 + 'a';

            // Aplicar deslocamento C
            ch = (ch - 'a' + C) % 26 + 'a';
        }
        // Minúsculos

        // Aplicar deslocamento A

        phrase[i] = ch;
        i++;
    }
    printf("String modificada: %s\n", phrase);
    

    printf("Digite novamente 3 valores A B C para desfazer a criptografia: ");
    scanf("%d %d %d", &A, &B, &C);
    i = 0;

    while (phrase[i] != '\0')
    {
        char ch = phrase[i];//ch recebe o valor da letra atual

        if (ch >= 'A' && ch <= 'Z')
        {
            // REFAZER deslocamento A DIREITA
            ch = (ch - 'A' - C+ 26)  % 26 + 'A'; // ch-'A'

            // REFAZER deslocamento B ESQUERDA
            ch = (ch - 'A' + B) % 26 + 'A';

            // REFAZER deslocamento C DIREITA
            ch = (ch - 'A' - A + 26) % 26 + 'A';
        }

        else if (ch >= 'a' && ch <= 'z')
        {
            // REFAZER deslocamento A DIREITA
            ch = (ch - 'a' - C + 26) % 26 + 'a';

            // REFAZER deslocamento B ESQUERDA
            ch = (ch - 'a' + B) % 26 + 'a';

            // REFAZER deslocamento C DIREITA
            ch = (ch - 'a' - A + 26) % 26 + 'a';
        }

        phrase[i] = ch;//a letra atual recebe o caractere deslocado
        i++;//indice aumenta e a iteração volta pro inicio
    }

    printf("String original: %s\n", phrase);
    return 0;
}
