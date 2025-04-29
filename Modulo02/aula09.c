#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    float nota1;
    float nota2;
    float nota3;

    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);

    printf("\nA média entre as notas é: %.1f ", (nota1 + nota2 + nota3)/3);

}