#include <stdio.h>

#define PASSOS_TORRE 5
#define PASSOS_BISPO 5
#define PASSOS_RAINHA 8

// funçao pra mostrar movimentação do peao
void movimentar_peao() {
    printf("\nMovimentacao do Peao:\n");
    printf("  O peao anda 1 casa pra frente\n");
    printf("  Na primeira jogada pode andar 2 casas\n");
    printf("  Captura na diagonal\n");
}

// funçao pra mostrar movimentação do rei
void movimentar_rei() {
    printf("\nMovimentacao do Rei:\n");
    printf("  O rei anda 1 casa em qualquer direçao\n");
}

// funçao pra mostrar movimentação da torre
void movimentar_torre(int passo) {
    printf("\nMovimentacao da Torre:\n");
    for(int i = 1; i <= PASSOS_TORRE; i++) {
        printf("  Passo %d: Anda em linha reta\n", i);
    }
}

// funçao pra mostrar movimentação do bispo
void movimentar_bispo(int passo) {
    printf("\nMovimentacao do Bispo:\n");
    for(int i = 1; i <= PASSOS_BISPO; i++) {
        printf("  Passo %d: Anda na diagonal\n", i);
    }
}

// funçao pra mostrar movimentação da rainha
void movimentar_rainha(int passo) {
    printf("\nMovimentacao da Rainha:\n");
    for(int i = 1; i <= PASSOS_RAINHA; i++) {
        printf("  Passo %d: Pode ir na diagonal, vertical ou horizontal\n", i);
    }
}

// funçao pra mostrar movimentação do cavalo
void movimentar_cavalo() {
    printf("\nMovimentacao do Cavalo em L:\n");
    for(int i = 1; i <= 3; i++) {
        printf("Movimento em L %d:\n", i);
        printf("  Passo 1: Baixo\n");
        printf("  Passo 2: Baixo\n");
        printf("  Passo final: Esquerda\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\n=== Nivel Mestre - Xadrez ===\n");
        printf("1. Movimentar Peao\n");
        printf("2. Movimentar Rei\n");
        printf("3. Movimentar Torre\n");
        printf("4. Movimentar Bispo\n");
        printf("5. Movimentar Rainha\n");
        printf("6. Movimentar Cavalo\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: movimentar_peao(); break;
            case 2: movimentar_rei(); break;
            case 3: movimentar_torre(0); break;
            case 4: movimentar_bispo(0); break;
            case 5: movimentar_rainha(0); break;
            case 6: movimentar_cavalo(); break;
            case 0: printf("Encerrando o programa...\n"); break;
            default: printf("Opcao invalida, tente de novo!\n");
        }
    } while(opcao != 0);

    return 0;
}
