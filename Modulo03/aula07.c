#include <stdio.h>

void main() {

    int usuario;
    int senha;

    printf("Usuário: ");
    scanf("%d", &usuario);

    if (usuario == 1234) {
        printf("Senha: ");
        scanf("%d", &senha);

        if (senha == 4321) {
            printf("Acesso autorizado!");
        } else {
            printf("Acesso negado!");
        }
    } else {
        printf("Usuário inexistente!");
    }

}