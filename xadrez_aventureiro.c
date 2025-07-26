#include <stdio.h>

int main() {
    // Nível Aventureiro - movimentacao do Cavalo em L
    // objetivo eh usar loops aninhados: um pra linha e outro pra coluna

    const int MOVIMENTOS_L = 3; // quantos movimentos em L o cavalo vai fazer

    printf("Movimentacao do Cavalo em L:\n");

    for (int i = 1; i <= MOVIMENTOS_L; i++) {
        printf("Movimento em L %d:\n", i);

        // parte 1 do L: 2 passos para baixo
        int passo_baixo = 1;
        while (passo_baixo <= 2) {
            printf("  Passo %d: Baixo\n", passo_baixo);
            passo_baixo++;
        }

        // parte 2 do L: 1 passo para esquerda
        printf("  Passo final: Esquerda\n");
    }

    return 0;
}
