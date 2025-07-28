#include <stdio.h>

#define PASSOS_TORRE 5
#define PASSOS_BISPO 5
#define PASSOS_RAINHA 5

void movimentar_peao();
void movimentar_rei();
void movimentar_torre_recursiva(int passos_restantes, const char* direcao);
void movimentar_torre();
void movimentar_bispo_recursiva(int passos_restantes, const char* direcao);
void movimentar_bispo();
void movimentar_rainha_recursiva(int passos_restantes, const char* direcao);
void movimentar_rainha();
void movimentar_cavalo();

void imprimir_passo(const char* peca, const char* direcao) {
    printf("  %s move: %s\n", peca, direcao);
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
            case 3: movimentar_torre(); break;
            case 4: movimentar_bispo(); break;
            case 5: movimentar_rainha(); break;
            case 6: movimentar_cavalo(); break;
        }
    } while(opcao != 0);

    return 0;
}

// ----------------- PEÇAS ------------------

void movimentar_peao() {
    int passos = 2;
    printf("\nMovimentacao do Peao:\n");
    for (int i = 0; i < passos; i++) {
        imprimir_passo("Peao", "Cima");
    }
}

void movimentar_rei() {
    const char* direcoes[] = {
        "Cima", "Baixo", "Direita", "Esquerda",
        "Diagonal Cima-Direita", "Diagonal Cima-Esquerda",
        "Diagonal Baixo-Direita", "Diagonal Baixo-Esquerda"
    };
    printf("\nMovimentacao do Rei:\n");
    for (int i = 0; i < 8; i++) {
        imprimir_passo("Rei", direcoes[i]);
    }
}

// ----------------- TORRE ------------------

void movimentar_torre_recursiva(int passos_restantes, const char* direcao) {
    if (passos_restantes == 0) return;
    imprimir_passo("Torre", direcao);
    movimentar_torre_recursiva(passos_restantes - 1, direcao);
}

void movimentar_torre() {
    printf("\nMovimentacao da Torre (5 casas para Direita):\n");
    movimentar_torre_recursiva(PASSOS_TORRE, "Direita");
}

// ----------------- BISPO ------------------

void movimentar_bispo_recursiva(int passos_restantes, const char* direcao) {
    if (passos_restantes == 0) return;
    imprimir_passo("Bispo", direcao);
    movimentar_bispo_recursiva(passos_restantes - 1, direcao);
}

void movimentar_bispo() {
    printf("\nMovimentacao do Bispo (5 casas na Diagonal Cima-Direita):\n");
    movimentar_bispo_recursiva(PASSOS_BISPO, "Diagonal Cima-Direita");
}

// ----------------- RAINHA ------------------

void movimentar_rainha_recursiva(int passos_restantes, const char* direcao) {
    if (passos_restantes == 0) return;
    imprimir_passo("Rainha", direcao);
    movimentar_rainha_recursiva(passos_restantes - 1, direcao);
}

void movimentar_rainha() {
    printf("\nMovimentacao da Rainha (5 casas para Direita):\n");
    movimentar_rainha_recursiva(PASSOS_RAINHA, "Direita");

    printf("\nMovimentacao da Rainha (5 casas na Diagonal Cima-Esquerda):\n");
    movimentar_rainha_recursiva(PASSOS_RAINHA, "Diagonal Cima-Esquerda");
}

// ----------------- CAVALO ------------------

void movimentar_cavalo() {
    printf("\nMovimentacao do Cavalo (2 Cima, 1 Direita) usando loops aninhados:\n");

    for (int i = 0; i < 2; i++) {
        printf("  Passo vertical %d: Cima\n", i + 1);
        for (int j = 0; j < 1; j++) {
            if (i == 1 && j == 0) {
                printf("    (preparando pra movimento em L)\n");
                continue;
            }
        }
    }

    for (int k = 0; k < 1; k++) {
        printf("  Passo horizontal: Direita\n");
        if (k == 0) {
            // só demonstrando controle de fluxo
            break;
        }
    }
}
