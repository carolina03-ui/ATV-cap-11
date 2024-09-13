#include <stdio.h>
#include <stdlib.h> 

int main() {
    int N;
    int *vetor;

    do {
        printf("Digite o valor de N (não negativo): ");
        scanf("%d", &N);
        if (N < 1) {
            printf("Valor inválido. N deve ser maior ou igual a 1.\n");
        }
    } while (N < 1);

    vetor = (int*)malloc(N * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; 
    }

    for (int i = 0; i < N; i++) {
        do {
            printf("Digite o valor do elemento %d (maior ou igual a 2): ", i + 1);
            scanf("%d", &vetor[i]);
            if (vetor[i] < 2) {
                printf("Valor inválido. O valor deve ser maior ou igual a 2.\n");
            }
        } while (vetor[i] < 2);
    }

    printf("\nValores do vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("Elemento %d: %d\n", i + 1, vetor[i]);
    }

    free(vetor);

    return 0;
}
