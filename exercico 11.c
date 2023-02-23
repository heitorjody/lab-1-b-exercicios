void somar_e_multiplicar_linhas(int matriz[][COLUNAS], int linhas, int colunas, int L1, int L2) {
    int soma = 0;
    int produto = 1;

    // Calcula a soma e o produto dos elementos da linha L1
    for (int j = 0; j < colunas; j++) {
        soma += matriz[L1][j];
        produto *= matriz[L1][j];
    }

    // Soma os elementos da linha L2 com a soma calculada anteriormente
    for (int j = 0; j < colunas; j++) {
        matriz[L2][j] += soma;
    }

    // Multiplica os elementos da linha L2 pelo produto calculado anteriormente
    for (int j = 0; j < colunas; j++) {
        matriz[L2][j] *= produto;
    }
}
