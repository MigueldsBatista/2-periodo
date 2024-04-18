#include <stdio.h>
#include <string.h>

int main(){
    char name[100], new_name[100];
    printf("digite um nome");
    scanf("%s", &name);

    printf("digite o novo nome");
    scanf("%s", &new_name);
    strcpy(name, new_name);
    printf("o novo nome é : %s", name);
}