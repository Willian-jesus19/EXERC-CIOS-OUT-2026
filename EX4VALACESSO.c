#include <stdio.h>


int main() {
    int senha;
    int credencial;

    do {
        printf("Digite sua credencial:\n");
        scanf("%i", &credencial);
        
        printf("Digite a senha: ");
        scanf("%i", &senha);

        if ((senha != 9999  || credencial  !=1234)) {
            printf(" Usúario ou Senha incorretos! Tente novamente.\n");
        }

    } while ((senha != 9999  || credencial  !=1234)); 
    printf("\nAcesso permitido! Seja bem-vindo.\n");

    return 0;
}