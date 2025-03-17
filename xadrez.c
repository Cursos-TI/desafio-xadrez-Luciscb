#include <stdio.h>

//MOVIMENTAÇÃO TORRE
void movertorre (int casas1){
    if (casas1 > 0) {
        printf("Direita\n");
        movertorre (casas1 - 1);
    }
}

//MOVIMENTAÇÃO BISPO
void moverbispo (int casas2){
    if (casas2 > 0) {
        printf("Cima\n");
        printf("Esquerda\n");
        moverbispo (casas2 - 1);
    }
}

//MOVIMENTAÇÃO RAINHA
void moverrainha (int casas3){
    if (casas3 > 0) {
        printf("Esquerda\n");
        moverrainha (casas3 - 1);
    }
}

//MOVIMENTAÇÃO CAVALO
void movercavalo (int casas4){
    if (casas4 > 0) {
        printf("Cima\n");
        movercavalo (casas4 - 1);
    }
   
}


int main() {
    movertorre (5);
    moverbispo (5);
    moverrainha (8);
    movercavalo (2);
    printf("Direita\n");
}


    
    
