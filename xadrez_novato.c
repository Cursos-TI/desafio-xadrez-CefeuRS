#include <stdio.h>

int main() {
    // constantes de movimento
    const int MOV_BISPO = 5;  // vai ficar com for
    const int MOV_TORRE = 5;  // vai usar while
    const int MOV_RAINHA = 8; // vai usar do-while

    // Movimento do Bispo (for)
    printf("Movimento do Bispo (diagonal superior direita):\n");
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Passo %d: Cima + Direita\n", i);
    }

    // Movimento da Torre (while)
    printf("\nMovimento da Torre (para a direita):\n");
    int contador_torre = 1;
    while (contador_torre <= MOV_TORRE) {
        printf("Passo %d: Direita\n", contador_torre);
        contador_torre++;
    }

    // Movimento da Rainha (do-while)
    printf("\nMovimento da Rainha (para a esquerda):\n");
    int contador_rainha = 1;
    do {
        printf("Passo %d: Esquerda\n", contador_rainha);
        contador_rainha++;
    } while (contador_rainha <= MOV_RAINHA);

    return 0;
}
