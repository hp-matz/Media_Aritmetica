#include <stdio.h>

/*Elabore um algoritmo para entrar com 4 notas. Exiba a média aritmética das notas. Caso a média seja maior ou igual a 7, anuncie que o aluno foi aprovado. Caso contrário, está reprovado.*/

int main(void) {

  float n1 = 0;
  float n2 = 0;
  float n3 = 0;
  float n4 = 0;
  float mf = 0;

  printf("\n**  Digite a nota da prova 1: ");
  scanf("%f", &n1);
  printf("\n**  Digite a nota da prova 2: ");
  scanf("%f", &n2);
  printf("\n**  Digite a nota da prova 3: ");
  scanf(" %f", &n3);
  printf("\n**  Digite a nota da prova 4: ");
  scanf("\%f", &n4);

  mf = (n1 + n2 + n3 + n4) / 4;

  if (mf >= 7){
    printf("\n**  Parabéns o aluno foi aprovado com uma média de %.1f pontos!", mf);
  }
  else {
    printf("\n**  O aluno reprovou e sua média foi de %.1f pontos.", mf);
  }

  return 0;
}