#include <stdio.h>

void movimentar_peao() {
    int casaInicial = 2;
    int casaAtual;
    
    printf("\nMovimentacao do Peao:\n");
    printf("Digite a casa atual do peao (linha numerica, 2 a 7): ");
    scanf("%d", &casaAtual);
    
    if (casaAtual == casaInicial) {
        printf("O peao pode avancar 1 ou 2 casas\n");
    } else if (casaAtual > casaInicial && casaAtual < 8) {
        printf("O peao so pode avancar 1 casa\n");
    } else if (casaAtual == 8) {
        printf("O peao chegou no final e pode virar outra peca (promoção)\n");
    } else {
        printf("Casa invalida\n");
    }
    
    // simulando captura diagonal
    char captura;
    printf("Tem uma peca adversaria na diagonal? (s/n): ");
    scanf(" %c", &captura);
    
    if (captura == 's') {
        printf("O peao pode capturar na diagonal\n");
    } else {
        printf("Sem capturas disponiveis\n");
    }
}

void movimentar_rei() {
    printf("\nMovimentacao do Rei:\n");

    int i = 1;
    while (i <= 8) {
        printf("Movimento %d: 1 casa em qualquer direcao\n", i);
        i++;
    }

    char roque;
    printf("Deseja simular roque? (s/n): ");
    scanf(" %c", &roque);
    
    if (roque == 's') {
        printf("O rei pode fazer o roque se as condicoes forem atendidas\n");
    } else {
        printf("Sem roque nessa jogada\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\n\n=== Nivel Mestre - Xadrez ===\n");
        printf("1. Movimentar Peao\n");
        printf("2. Movimentar Rei\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                movimentar_peao();
                break;
            case 2:
                movimentar_rei();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida, tente dnv\n");
        }

    } while (opcao != 0);

    return 0;
}
