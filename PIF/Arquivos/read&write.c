#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file;
    file=fopen("escrita.txt", "w+");
    char ch;
    printf("digite um texto e pressione ENTER para acabar: ");
    scanf("%c", &ch);

    while (ch!='\n')
    {
        
        fputc(ch, file);
        scanf("%c", &ch);

    }
    rewind(file);


    while ((ch=fgetc(file))!=EOF)
    {
    printf("%c", ch);
    }
    
    
    return 0;
}
