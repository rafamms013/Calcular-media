#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 
{
  //Declaração de variáveis
  float nota1, nota2, nota3, media;

  //Entrada de dados
  printf("\tDigite a nota do primeiro trimestre: ");
  scanf("%f",&nota1);

  printf("\tDigite a nota do seugundo trimestre: ");
  scanf("%f",&nota2);

  printf("\tDigite a nota do terceiro trimestre: ");
  scanf("%f",&nota3);

  //Processamento
  media=(nota1+nota2+nota3) /3;
  
  printf("Media do aluno=%.2f\n", media);
  
  return 0;
}

