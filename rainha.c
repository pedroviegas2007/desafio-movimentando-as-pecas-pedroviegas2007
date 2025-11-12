#include <stdio.h>

// ------------------------------------------------------
// Simulação do movimento da Rainha no xadrez
// Estrutura de repetição utilizada: DO-WHILE
// ------------------------------------------------------
// A Rainha é a peça mais poderosa do xadrez,
// podendo se mover em qualquer direção.
// Nesta simulação, ela se moverá 8 casas para a esquerda.
// ------------------------------------------------------

int main() {
    int casasRainha = 8; // Número de casas que a rainha deve percorrer
    int passo = 1;       // Contador do movimento

    printf("Movimento da Rainha:\n");

    // O laço do-while executa o bloco ao menos uma vez
    // e verifica a condição somente no final.
    do {
        printf("Esquerda (%d)\n", passo);
        passo++;
    } while (passo <= casasRainha);

    return 0;
}
