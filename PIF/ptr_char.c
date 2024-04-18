#include <stdio.h>

// *procurar retorna um ponteiro de char

char *procurar(char *string, char ch){
while(*string !=ch && *string !='\0'){

string++;

}

if(*string !="\0") return string;

else return NULL;

}

int main() {
    char frase[] = "Exemplo de string para busca";
    char caractere = 'd';

    // Chamando a função procurar
    char *resultado = procurar(frase, caractere);

    // Verificando o resultado
    if (resultado != NULL) {
        printf("O caractere '%c' foi encontrado na string. Ponteiro: %p\n", caractere, (void *)resultado);
        printf("Conteudo apos o caractere encontrado: %s\n", resultado);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", caractere);
    }

    return 0;
}
