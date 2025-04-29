#include <stdio.h>
#include <locale.h>

void main() {

  setlocale(LC_ALL, "");
  
  int numero;
  
  printf("Digito um número: ");
  scanf("%d", &numero);

  if (numero > 10) {
    printf("O número %d é maior que 10", numero);
  } else {
    if (numero == 10) {
        printf("O número é igual a 10");
    } else {
        printf("O número %d é menor que 10", numero);
    }
  } 
}