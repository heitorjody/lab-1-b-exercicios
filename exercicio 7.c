#include <stdio.h>
#include <string.h>

#define MAX_PEOPLE 3

struct Pessoa {
    char nome[100];
    int idade;
    float peso;
    float altura;
};

int main() {
    struct Pessoa pessoas[MAX_PEOPLE];

    // Leitura dos dados das pessoas
    for (int i = 0; i < MAX_PEOPLE; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);

        printf("Digite o peso da pessoa %d (em kg): ", i + 1);
        scanf("%f", &pessoas[i].peso);

        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &pessoas[i].altura);
    }

    // Impressão dos dados das pessoas
    printf("\nDados das pessoas:\n");
    for (int i = 0; i < MAX_PEOPLE; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d anos\n", pessoas[i].idade);
        printf("Peso: %.2f kg\n", pessoas[i].peso);
        printf("Altura: %.2f m\n", pessoas[i].altura);
        printf("\n");
    }

    return 0;
}
