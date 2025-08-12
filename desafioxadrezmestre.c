#include <stdio.h>

void movertorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movertorre(casas - 1);
    }
}

void moverbispo(int passos) {
    for (int i = 0; i < passos; i++) {          // loop vertical (Cima)
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {           // loop horizontal (Direita), 1 passo por linha para diagonal
            printf("Direita\n");
        }
    }
}

void moverrainha(int casas2) {
    if (casas2 > 0) {
        printf("Esquerda\n");
        moverrainha(casas2 - 1);
    }
}

void movercavalo(int passos) {
    for (int i = 0; i < passos; i++) {          

        for (int j = 0; j < 2; j++) { // loop vertical (Cima)   
         printf("Cima\n");
        }
        for (int k = 0; k < 1; k++){ // loop horizontal (Direita)
           printf("Direita\n");
        }
    }
}



int main() {
    printf("-Torre-\n");// 5 movimentos para a direita
    movertorre(5);

    printf("\n-Rainha-\n");// 8 movimentos para a esquerda 
    moverrainha(8);

    printf("\n-Bispo-\n");
    moverbispo(5);  // 5 movimentos diagonais: cima + direita

    printf("\n-Cavalo-\n");// 2 movimentos para cima e um para a direita 
    movercavalo(1);

    return 0;
}