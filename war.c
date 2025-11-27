#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Cada território possui: nome, cor do exército e quantidade de tropas
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Vetor para armazenar 5 territórios
    Territorio territorios[5];

    // Cadastro dos territórios
    for (int i = 0; i < 5; i++) {
        printf("\n--- Cadastro do Território %d ---\n", i + 1);

        // Entrada do nome
        printf("Digite o nome do território: ");
        scanf("%29s", territorios[i].nome); // limita a 29 caracteres

        // Entrada da cor do exército
        printf("Digite a cor do exército: ");
        scanf("%9s", territorios[i].cor); // limita a 9 caracteres

        // Entrada da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados cadastrados
    printf("\n===== Territórios Cadastrados =====\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}
