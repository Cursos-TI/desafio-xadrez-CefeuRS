#include <stdio.h>

int main() {
    // Movimento da Torre (Nivel Novato)
    printf("\nMovimento da Torre:\n");
    const int MOVIMENTOS_TORRE = 5;
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (Nivel Novato)
    printf("\nMovimento do Bispo:\n");
    const int MOVIMENTOS_BISPO = 5;
    int j = 0;
    while (j < MOVIMENTOS_BISPO) {
        printf("Cima\n");
        printf("Direita\n");
        j++;
    }

    // Movimento da Rainha (Nivel Novato)
    printf("\nMovimento da Rainha:\n");
    const int MOVIMENTOS_RAINHA = 8;
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOVIMENTOS_RAINHA);

    // Movimento do Cavalo (Nivel Aventureiro)
    printf("\nMovimento do Cavalo:\n");
    const int MOVIMENTOS_L = 3;
    for (int i = 0; i < MOVIMENTOS_L; i++) {
        int passos = 0;
        while (passos < 2) {
            printf("Baixo\n");
            passos++;
        }
        printf("Esquerda\n");
    }

    return 0;
}
