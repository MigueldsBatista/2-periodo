#include <stdio.h>
#include <string.h>

int main() {
    char string[150];
    int italico = 1, negrito = 1;

    while (fgets(string, sizeof(string), stdin) != NULL) {
        for (int i = 0; string[i]; ++i) {
            if (string[i] == '_') {
                if (italico)//1 então quer dizer que estamos no início do italico
                    printf("<i>");
                else
                    printf("</i>");
                italico = !italico;//italico==0 para que o próximo italico seja </i>
            } else if (string[i] == '*') {
                if (negrito)
                    printf("<b>");
                else
                    printf("</b>");
                negrito = !negrito;
            } else {
                putchar(string[i]);
            }
        }
    }

    return 0;
}
