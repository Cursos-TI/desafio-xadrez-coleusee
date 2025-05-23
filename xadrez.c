#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva com loops aninhados para o movimento do Bispo
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    // Movimento diagonal: cima + direita
    for (int i = 0; i < 1; i++) { // Loop externo: vertical (simula cima)
        for (int j = 0; j < 1; j++) { // Loop interno: horizontal (simula direita)
            printf("Diagonal para cima e direita\n");
        }
    }
    moverBispoRecursivo(casas - 1);
}

// Movimento do cavalo com loops aninhados e condições

void moverCavalo() {
    printf("Movimento do Cavalo: L para cima e direita (2 cima, 1 direita)\n");
    for (int cima = 0; cima <= 2; cima++) {
        if (cima == 2) {
            for (int direita = 0; direita <= 1; direita++) {
                if (direita == 1) {
                    printf("Direita\n");
                    break;
                } else {
                    continue;
                }
            }
        } else {
            printf("Cima\n");
        }
    }
}
            
int main() {
    // Movimento da Torre
    printf("Movimento da Torre: 5 casas para Direita\n");
    moverTorre(5);

    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo: 5 casas na diagonal para cima e direita\n");
    moverBispoRecursivo(5);

    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha: 8 casas para Esquerda\n");
    moverRainha(8);

    printf("\n");

    // Movimento do Cavalo
    moverCavalo();

    return 0;
}
