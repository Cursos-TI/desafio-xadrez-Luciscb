#include <stdio.h>

int main() {
    int t, b, r;

    //MOVIMENTAÇÃO TORRE:
    for (t = 0; t < 5; t++)
    {
        printf("Direita\n", t);
    }
    
    //MOVIMENTAÇÃO BISPO
    do
    {
        printf("Cima, Direita\n", b);
        b++;
    } while (b < 5);
    
    //MOVIMENTAÇÃO RAINHA
    while (r < 8)
    {
        printf("Esquerda\n", r);
        r++;
    }
    

    return 0;
}
