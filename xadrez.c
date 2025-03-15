#include <stdio.h>

int main() {
    int t, b = 1, r = 1, c = 1;

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
    } while (b <= 5);
    
    //MOVIMENTAÇÃO RAINHA
    while (r <= 8)
    {
        printf("Esquerda\n", r);
        r++;
    }
    
    while (c--)
    {
       for (int i = 0; i < 2; i++)
       {
        printf("Cima\n");
       }
       printf("Direita\n");
    }
    

    return 0;
}
