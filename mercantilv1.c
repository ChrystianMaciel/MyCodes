#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    
    int preco = 0; 
    int palpite1 = 0;
    int palpite2 = 0;
    scanf("%d %d %d", &preco, &palpite1, &palpite2);
    
    if( abs(palpite1 - preco) < abs(palpite2 - preco) )
    {
        printf("primeiro\n");
    }
    else if( abs(palpite1 - preco) > abs(palpite2 - preco) )
    {
        printf("segundo\n");
    }
    else
    {
        printf("empate\n");
    }
    
    return 0;
}