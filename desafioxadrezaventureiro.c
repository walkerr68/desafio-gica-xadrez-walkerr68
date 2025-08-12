#include <stdio.h>

int main() {
    int i = 1;
    int movimentoCompleto = 1; // Flag para controlar o movimento em 'L'
 
    printf("Cavalo\n");
    while (movimentoCompleto --)
      {
        for (int i = 0; i < 2; i++){
            printf("Baixo\n"); // Imprime "Cima" duas vezes  
        }
        printf("Esquerda\n");  // Imprime "Direita" uma vez
      }
    // Primeira parte
    printf("\nRainha\n");

    // Loop while: imprime "Esquerda" 8 vezes
    while (i <= 8) {
        printf("Esquerda\n");
        i++;
    }

    // Bispo
    printf("\nBispo\n");

    // Loop for: imprime "Cima,Direita" 5 vezes
    for (int j = 1; j <= 5; j++) {
        printf("Cima,Direita\n");
    }

    // Redefinindo i para o do-while funcionar como esperado
    i = 1;
     printf("\nTorre\n");
    do {
        printf("Direita\n");
        i++;
    } while (i <= 5);  // Agora imprime "Torre" 5 vezes

    return 0;
}