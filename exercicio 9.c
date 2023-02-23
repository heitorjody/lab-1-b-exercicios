#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void substituir_negativos_por_modulo(int matriz[][COLUNAS], int linhas, int colunas);

int main() {
    int matriz[LINHAS][COLUNAS] = {
        { 1, -2, 3 },
        { 4, -5, 6 },
        { 7, 8, -9 }
    };

    substituir_negativos_por_modulo(matriz, LINHAS, COLUNAS);

    // Impressão da matriz após a substituição dos números negativos por seus valores absolutos
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
