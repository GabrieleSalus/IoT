#include <stdio.h>

void main() {

    float nota1;
    float nota2;
    float nota3;

    printf("Digite a 1º Nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a 2º Nota do aluno: ");
    scanf("%f", &nota2);

    printf("Digite a 3º Nota do aluno: ");
    scanf("%f", &nota3);

    float media = ((nota1 + nota2 + nota3) / 3);

    if (media >= 7.00) {
        printf("O estudante foi aprovado!");
    } else {
        printf("O estudante foi reprovado!");
    }

}