#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0;
    char string[100], ch;

    printf("Digite uma string (pressione Enter para terminar):\n");

    while ((ch = getchar()) != '\n' && i < 99)
    {
        string[i] = ch;
        i++;
    }

    string[i] = '\0';

    for (i = 0; i < strlen(string); i++)
    {
        ch = string[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            string[i] = ch + 'a' - 'A'; // Convertendo caracteres maiúsculos para minúsculos
        }
    }

    printf("string: %s", string);

    return 0;
}
