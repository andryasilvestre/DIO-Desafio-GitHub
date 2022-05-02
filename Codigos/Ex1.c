// Faça um Programa que peça dois números e imprima o maior deles.

#include <stdio.h>

int main() {
float n1, n2;

  printf("Digite o primeiro número\n");
  scanf ("%f", &n1);
  printf("Digite o segundo número\n");
  scanf ("%f", &n2);

  if (n1>n2) {printf("%.2f é maior que %.2f.", n1, n2);}
  else if  (n2>n1) {printf("%.2f é maior que %.2f.", n2, n1);}
  else printf ("%.2f é igual a %.2f.", n1, n2);

  return 0;
}