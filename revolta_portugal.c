#include <stdio.h>
int main(){
    
    int tamanho_vetor = 0;
    scanf("%d", &tamanho_vetor);
    
    int soma_par = 0;
    int soma_impar = 0;
    
    for(int auxiliar = 0; auxiliar < tamanho_vetor; auxiliar++)
    {
        int tropa = 0;
        scanf("%d", &tropa);
        if(tropa % 2 == 0)
        {
            soma_par = soma_par + tropa;
        }
        else
            soma_impar = soma_impar + tropa;
        
    }
    if(soma_par > soma_impar)
    {
        printf("rebeldes\n");
    }
    if(soma_impar > soma_par)
    {
        printf("soldados\n");
    }
    if(soma_par == soma_impar)
    {
        printf("empate\n");
    }
    
    return 0;
}