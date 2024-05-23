#include <stdio.h>

int main()
{
    system("clear");

    FILE *file;
    file=fopen("string.txt", "a");// == append ou anexar na proxima linha não preenchida do arquivo

    if(!file){
        printf("nao foi possivel abrir o arquivo\n");
        getchar();
        exit(0);
    }

    fprintf(file, "Primeira linha do arquivo\n");
    char frase[]="Segunda linha\n";
    fputs(frase, file);
    char c='3';
    fputc(c, file);

    fclose(file);
    return 0;
}
