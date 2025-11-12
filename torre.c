#include <stdio.h>

// ------------------------------------------------------
// Simulação do movimento da Torre no xadrez
// Estrutura de repetição utilizada: FOR
// ------------------------------------------------------
// A Torre move-se em linha reta, horizontalmente ou verticalmente.
// Nesta simulação, ela se moverá 5 casas para a direita.
// ------------------------------------------------------

int main() {
    int casasTorre = 5; // Número de casas que a torre deve percorrer

    printf("Movimento da Torre:\n");

    // O laço for é ideal quando sabemos exatamente
    // quantas repetições queremos executar.
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    return 0;
}
