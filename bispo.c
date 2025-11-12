#include <stdio.h>

// ------------------------------------------------------
// Simulação do movimento do Bispo no xadrez
// Estrutura de repetição utilizada: WHILE
// ------------------------------------------------------
// O Bispo move-se nas diagonais.
// Nesta simulação, ele se moverá 5 casas na diagonal
// para cima e à direita ("Cima, Direita").
// ------------------------------------------------------

int main() {
    int casasBispo = 5; // Número de casas que o bispo deve percorrer
    int contador = 1;   // Contador para controle do laço

    printf("Movimento do Bispo:\n");

    // O laço while é útil quando a condição de parada
    // depende de uma variável de controle.
    while (contador <= casasBispo) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }

    return 0;
}
