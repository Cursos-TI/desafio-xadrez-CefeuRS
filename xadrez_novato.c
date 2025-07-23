#include <stdio.h>

// Desafio de Xadrez
// nivel novato - movimentacoes simples das pecas

int main() {
    // declarando as constantes pra cada peca
    const int bispo_casas = 5;
    const int torre_casas = 5;
    const int rainha_casas = 8;

    // movimentacao do bispo
    // o bispo se move em diagonal superior direita, entao uma combinacao de cima + direita
    printf("Movimento do Bispo (diagonal superior direita):\n");
    for(int i = 1; i <= bispo_casas; i++) {
        printf("Passo %d: Cima + Direita\n", i);
    }

    // movimentacao da torre
    // a torre vai pra direita
    printf("\nMovimento da Torre (para a direita):\n");
    for(int i = 1; i <= torre_casas; i++) {
        printf("Passo %d: Direita\n", i);
    }

    // movimentacao da rainha
    // a rainha nesse caso vai 8 casas pra esquerda
    printf("\nMovimento da Rainha (para a esquerda):\n");
    for(int i = 1; i <= rainha_casas; i++) {
        printf("Passo %d: Esquerda\n", i);
    }

    return 0;
}
