#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas, int movimento) {
    if (casas == 0) {
        return;
    }
    
    if (movimento == 1) {
        printf("Direita\n");
    }
    
    moverTorre(casas - 1, movimento);  // Chamada recursiva para o próximo movimento
}

// Função recursiva para o movimento do Bispo (diagonal)
void moverBispo(int casas, int movimentoVertical, int movimentoHorizontal) {
    if (casas == 0) {
        return;
    }
    
    if (movimentoVertical == 1 && movimentoHorizontal == 1) {
        printf("Cima, Direita\n");
    }
    
    moverBispo(casas - 1, movimentoVertical, movimentoHorizontal);  // Chamada recursiva para o próximo movimento
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas, int movimentoVertical, int movimentoHorizontal) {
    if (casas == 0) {
        return;
    }

    if (movimentoVertical == 1) {
        printf("Cima\n");
    } else if (movimentoVertical == -1) {
        printf("Baixo\n");
    }

    if (movimentoHorizontal == 1) {
        printf("Direita\n");
    } else if (movimentoHorizontal == -1) {
        printf("Esquerda\n");
    }
    
    moverRainha(casas - 1, movimentoVertical, movimentoHorizontal);  // Chamada recursiva para o próximo movimento
}

// Função para o movimento do Cavalo (duas casas para cima e uma para a direita)
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
}

int main() {
    // Movimentação da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(5, 1);
    
    printf("\n");

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1, 1);
    
    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    moverRainha(8, 0, -1);
    
    printf("\n");

    // Movimentação do Cavalo: 2 casas para cima e 1 para a direita
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    
    return 0;
}

