#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[100];
    int i;
    printf("Digite uma string para substituir as vogais por i: \n");
    fgets(string, 100, stdin);

    for (i = 0; i < strlen(string); i++)
    {

        switch (string[i])
        {
        case 'A':
        case 'E':
        case 'O':
        case 'U':
            string[i]='I';
            break;
        case 'a':
        case 'e':
        case 'o':
        case 'u':
            string[i]='i';
            break;
        
        
        default:
            continue;
        }
    }
    puts(string);
    
    return 0;
}
