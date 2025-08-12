#include <stdio.h>

int main() {
    int i = 1;

    // Primeira parte
    printf("Rainha\n");

    // Loop while: imprime "Esquerda" 8 vezes
    while (i <= 8) {
        printf("Esquerda\n");
        i++;
    }

    // Bispo
    printf("Bispo\n");

    // Loop for: imprime "Cima,Direita" 5 vezes
    for (int j = 1; j <= 5; j++) {
        printf("Cima,Direita\n");
    }

    // Redefinindo i para o do-while funcionar como esperado
    i = 1;
     printf("Torre\n");
    do {
        printf("Direita\n");
        i++;
    } while (i <= 5);  // Agora imprime "Torre" 5 vezes

    return 0;
}