#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL, "portuguese");
float n1, n2, n3, resultado, ME;

printf("Digite a primeira nota do aluno: \n");
  scanf("%f", &n1);
setbuf(stdin, NULL);
  printf("Digite a segunda nota do aluno: \n");
  scanf("%f", &n2);
setbuf(stdin, NULL);
      printf("Digite a terceira nota do aluno: \n");
  scanf("%f", &n3);
setbuf(stdin, NULL);
          printf("Digite a nota da média dos exercícios realizados pelo aluno: \n");
  scanf("%f", &ME);
setbuf(stdin, NULL);

resultado = (n1+n2*2+n3*3+ME)/7;
if(resultado<4){
    printf("O aluno tirou nota: E \n\n");
}else if((resultado >= 4) && (resultado<6)){
    printf("O aluno tirou nota: D \n\n");
}else if((resultado >= 6) && (resultado <7.5)){
    printf("O aluno tirou nota: C \n\n");
}else if((resultado >= 7.5) && (resultado<9)){
    printf("O aluno tirou nota: B \n\n");
}else if(resultado >= 9){
    printf("O aluno tirou nota: A \n\n");
}
printf("Primeiro bimestre %f com peso 1 \n", n1);
printf("Segundo bimestre %f com peso 2 \n", n2);
printf("Terceiro bimestre %f com peso 3 \n", n3);
printf("Nota adquirida pela média de exercícios %f com peso 1 \n", ME);


    return 0;
}