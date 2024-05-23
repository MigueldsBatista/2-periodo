#include <stdio.h>

int main()
{
    system("clear");
    char input[100];
    freopen("string.txt", "r", stdin);//Redirecionando a standard input do sistema para receber o texto em file
    fgets(input, 100, stdin);

    printf("Linha 1;\n%s", input); //Sem a necessidade de criar um ponteiro tipo FILE nesse caso


    //TAMBEM É POSSIVEL REDIRECIONAR UM PONTEIRO DE ARQUIVO PARA APONTAR PARA OUTRO ARQUIVO

    FILE *file = fopen("string.txt", "r");//NAO FUNCIONA USAR REOPEN PARA MUDAR UM ARQUIVO POR EXEMPLO DE LEITURA PARA ESCRITA
    fgets(input, 100, file);
    printf("Texto do arquivo original: \n%s", input);



    freopen("new_string.txt", "r", file);//file agora aponta para outro arquivo

    fgets(input, 100, file);
    printf("Texto do arquivo novo: \n%s\n", input);


    return 0;
}
