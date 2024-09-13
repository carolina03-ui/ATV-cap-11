#include <stdio.h>

struct Aluno {
    int matricula;          
    char nome[100];        
    float notas[3];        
};

int main() {
    struct Aluno aluno;

    printf("Tamanho da estrutura 'Aluno': %zu bytes\n", sizeof(aluno));

    return 0;
}
