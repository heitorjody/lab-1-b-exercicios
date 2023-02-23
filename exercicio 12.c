#include <stdio.h>

int retorna(const char* str, char query) {
    const char* temp = str;
    while (*temp != 0 && *temp != query)
        temp++;
    return *temp == 0 ? -1 : temp - str;
}

int main() {
    const char* str = "mack";
    int query = 'c';
    int posicao = retorna(str, query);
    printf("caracter na posicao %d\n", posicao);
}