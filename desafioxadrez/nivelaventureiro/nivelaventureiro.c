#include <stdio.h>

int main() {
    // Entradas fixas (conforme enunciado)
    int movimentoVertical = 2;  // Baixo
    int movimentoHorizontal = 1; // Esquerda

    // Movimento do Cavalo
    // Primeiro: duas casas para baixo
    for (int i = 0; i < movimentoVertical; i++) {
        printf("Baixo\n");
    }

    // Depois: uma casa para a esquerda
    int contador = 0;
    while (contador < movimentoHorizontal) {
        printf("Esquerda\n");
        contador++;
    }

    // Linha em branco separando este movimento dos outros
    printf("\n");

    return 0;
    
}
