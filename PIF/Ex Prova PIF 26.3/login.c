#include <stdio.h>
#include <string.h>

int main(){
    char login[20]="Miguel", senha[20]="guel6102005", str1[20], str2[20];
    int result;
    printf("Digite seu login: ");
    scanf("%s", &str1);
    result=strcmp(str1, login);

    if (result==0){
        printf("Digite a senha: ");
        scanf("%s", &str2);
        result=strcmp(str2, senha);
        if (result==0) printf("Login Bem sucedido");
        else printf("Senha nao encontrada");
    }else printf("Login nao Cadastrado");
}