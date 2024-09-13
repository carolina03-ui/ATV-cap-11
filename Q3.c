#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

struct Cadastro {
    char nome[100];
    int idade;
    char endereco[200];
};

struct Cadastro* criarCadastro(int N) {
    struct Cadastro* vetor = (struct Cadastro*)malloc(N * sizeof(struct Cadastro));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        printf("Cadastro %d\n", i + 1);
        
        printf("Digite o nome: ");
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
        vetor[i].nome[strcspn(vetor[i].nome, "\n")] = '\0';
        
        printf("Digite a idade: ");
        scanf("%d", &vetor[i].idade);
        getchar();
        
        printf("Digite o endereco: ");
        fgets(vetor[i].endereco, sizeof(vetor[i].endereco), stdin);

        vetor[i].endereco[strcspn(vetor[i].endereco, "\n")] = '\0';
        
        printf("\n");
    }

    return vetor;
}

int main() {
    int N;

    printf("Digite o número de cadastros: ");
    scanf("%d", &N);
    getchar();

    struct Cadastro* cadastros = criarCadastro(N);

    printf("\nDados dos cadastros:\n");
    for (int i = 0; i < N; i++) {
        printf("Cadastro %d\n", i + 1);
        printf("Nome: %s\n", cadastros[i].nome);
        printf("Idade: %d\n", cadastros[i].idade);
        printf("Endereco: %s\n", cadastros[i].endereco);
        printf("\n");
    }

    free(cadastros);

    return 0;
}
