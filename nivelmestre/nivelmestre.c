#include <stdio.h>

// Função recursiva para Torre
void moverTorre(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverTorre(casas - 1, direcao);
}

// Função recursiva para Bispo (usando loops aninhados)
void moverBispo(int casas, char dirVertical[], char dirHorizontal[]) {
    if (casas == 0) return;
    // Loop externo: vertical
    for (int i = 0; i < 1; i++) {
        printf("%s\n", dirVertical);
        // Loop interno: horizontal
        for (int j = 0; j < 1; j++) {
            printf("%s\n", dirHorizontal);
        }
    }
    moverBispo(casas - 1, dirVertical, dirHorizontal);
}

// Função recursiva para Rainha (movimento vertical ou horizontal)
void moverRainha(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverRainha(casas - 1, direcao);
}

// Função com loops complexos para Cavalo
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int up = 0; up < 2; up++) {
            printf("Cima\n");
        }
        for (int right = 0; right < 1; right++) {
            printf("Direita\n");
        }
    }
}

int main() {
    int casasTorre, casasBispo, casasRainha, movimentosCavalo;

    // Entradas
    printf("Digite o numero de casas para a Torre: ");
    scanf("%d", &casasTorre);

    printf("Digite o numero de casas para o Bispo: ");
    scanf("%d", &casasBispo);

    printf("Digite o numero de casas para a Rainha: ");
    scanf("%d", &casasRainha);

    printf("Digite o numero de movimentos para o Cavalo: ");
    scanf("%d", &movimentosCavalo);

    printf("\n--- Torre ---\n");
    moverTorre(casasTorre, "Cima");

    printf("\n--- Bispo ---\n");
    moverBispo(casasBispo, "Cima", "Direita");

    printf("\n--- Rainha ---\n");
    moverRainha(casasRainha, "Direita");

    printf("\n--- Cavalo ---\n");
    moverCavalo(movimentosCavalo);

    return 0;
}