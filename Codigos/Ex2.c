// Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <stdio.h>

int main(void) {
float n1;

  printf("Digite o valor\n");
  scanf ("%f", &n1);


  if (n1>0) {printf("%.2f é positivo.", n1);}
  else if  (n1<0) {printf("%.2f é negativo.", n1);}
  else printf ("%.2f não é negativo, nem positivo.", n1);

  return 0;
}