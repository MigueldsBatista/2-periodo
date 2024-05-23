#include <stdio.h>
#include <stdlib.h>
int main()
{

    system("clear");

    char ch;
    FILE *file = fopen("vogal.txt", "r");

    if (file == NULL) {
        printf("Erro ao abrir arquivo");
        return 1;
    }  

    while ((ch = fgetc(file)) != EOF) {
        switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c", ch);
            break;

        default:
            break;
        }
    }
    fclose(file);
    return 0;
}
