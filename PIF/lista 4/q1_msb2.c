#include <stdio.h>
#include <string.h>

int main() {
    char user_entry[1000], user_sex;
    int cont = 0, user_size, boy, girl, entry_num, i;

    while (scanf("%d\n", &user_size) != EOF) {
        if (cont > 0)
            printf("\n");

        fgets(user_entry, sizeof(user_entry), stdin); //cada char ocupa 1 byte então sizeof serve pra medir a length

        boy = girl = i=0;
        while(user_entry[i] != '\0') {//para chegar até o final da string
            entry_num = 10 * (user_entry[i] - '0') + (user_entry[i + 1] - '0');//exemplo para user_size=24 "2"-"0"=2 em decimal ou seja 10*2+4
            char user_sex = user_entry[i + 3];
 
            if (entry_num == user_size) {
                if (user_sex == 'F')
                    ++girl;
                else
                    ++boy;
            }
            i = i + 5;//Cada iteração tem 5 caracteres de distância "24 F "ou seja ("2", "4", " ", F, " ") contando com os espaços
        }
        printf("Caso %d:\n", ++cont);
        printf("Pares Iguais: %d\nF: %d\nM: %d\n", girl + boy, girl, boy);
    }

    return 0;
}
