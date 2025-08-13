#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 8;   // Torre vai 8 casas para cima
    int casasBispo = 5;   // Bispo vai 5 casas na diagonal cima-direita
    int casasRainha = 10; // Rainha vai 10 casas para a esquerda

    // Movimento da Torre (linha reta)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Cima\n");
    }
    printf("\n");

    // Movimento do Bispo (diagonal cima-direita)
    printf("Movimento do Bispo:\n");
    int contador = 1;
    while (contador <= casasBispo) {
        printf("Cima Direita\n");
        contador++;
    }
    printf("\n");

    // Movimento da Rainha (linha reta para a esquerda)
    printf("Movimento da Rainha:\n");
    int contador2 = 1;
    do {
        printf("Esquerda\n");
        contador2++;
    } while (contador2 <= casasRainha);

    return 0;
}