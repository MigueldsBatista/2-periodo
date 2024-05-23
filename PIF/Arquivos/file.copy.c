#include <stdio.h>



int main(int argc, char const *argv[])
{
    system("clear");
    FILE *file, *new_file;
    file=fopen("string.txt", "r");
    new_file=fopen("new_string.txt", "w");//W reescreve o conteúdo do arquivo

    if((file || new_file)==NULL){

        printf("erro ao abrir o arquivo\n ");
        getchar();
        exit(0);
    }

    file_copy(file, new_file);
    fclose(file);
    fclose(new_file);
    return 0;
}
void file_copy(FILE *file, FILE *new_file){
char arquivo_texto[1000];

while(fgets(arquivo_texto, 1000, file)){
    fputs(arquivo_texto, new_file);
}
}