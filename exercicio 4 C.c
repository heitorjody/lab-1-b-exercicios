#include <stdio.h>
#include <string.h>

int main () {
    char nome1[100], nome2[100];
    printf("Informe o primeiro nome: ");
    gets(nome1);
    printf("Informe o segundo nome: ");
    gets(nome2);
    char ordem();
    ordem(nome1, nome2);
}

char ordem(char a[100], char b[100]) {    
    if(strcmp(a, b)<0)
        printf("A ordem e:\n %s.\n %s.\n", a,b);
    else
        printf("A ordem e:\n %s.\n %s.\n", b,a);
}