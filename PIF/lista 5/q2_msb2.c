#include <stdio.h>
#include <string.h>

#define MAX_NOME 30
#define MAX_ALUNOS 100

struct Aluno {
    char nome[MAX_NOME];
    char assinaturaOriginal[MAX_NOME];
};

int validaAssinatura(struct Aluno classe[], char assinaturaAula[], int posicao, int tam);
int procuraAluno(struct Aluno classe[], char nome[], int tam);

int main() {

    int qtdAlunos, qtdAlunosPresentes;
    int i, qtdAssinaturasFalsas;
    char nomeAluno[MAX_NOME], assinaturaAula[MAX_NOME];

    while (1) {
        scanf("%d", &qtdAlunos);
        if (qtdAlunos == 0)
            break;

        struct Aluno classe[MAX_ALUNOS];

        for (i = 0; i < qtdAlunos; i++)
            scanf(" %s %s", classe[i].nome, classe[i].assinaturaOriginal);

        scanf("%d", &qtdAlunosPresentes);

        qtdAssinaturasFalsas = 0;
        for (i = 0; i < qtdAlunosPresentes; i++) {
            scanf("%s %s", nomeAluno, assinaturaAula);

            if (!validaAssinatura(classe, assinaturaAula, procuraAluno(classe, nomeAluno, qtdAlunos), qtdAlunos))
                qtdAssinaturasFalsas++;
        }

        printf("%d\n", qtdAssinaturasFalsas);
    }

    return 0;
}

int validaAssinatura(struct Aluno classe[], char assinaturaAula[], int posicao, int tam) {
    int i;
    int qtdDiferencas = 0;

    for (i = 0; classe[posicao].assinaturaOriginal[i]; i++) {
        if (classe[posicao].assinaturaOriginal[i] != assinaturaAula[i])
            qtdDiferencas++;
    }

    if (qtdDiferencas <= 1)
        return 1;
    else
        return 0;
}

int procuraAluno(struct Aluno classe[], char nome[], int tam) {
    int i;

    for (i = 0; i < tam; i++) {
        if (strcmp(classe[i].nome, nome) == 0)
            return i;
    }

    return -1; // Se não encontrar o aluno, retorna um valor inválido
}
