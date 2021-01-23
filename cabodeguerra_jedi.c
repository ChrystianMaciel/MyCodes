#include <stdio.h>
int main(){
    
    int tamanho_vetor = 0;
    int soma_jedi = 0;
    int soma_sith = 0;
    
    scanf("%d", &tamanho_vetor);
    
    for(int i = 0; i < (tamanho_vetor); i++)
    {
        int tropa = 0;
        scanf("%d", &tropa);
        
        if(i < tamanho_vetor / 2)
		soma_jedi += tropa;
		
        else
		soma_sith += tropa;
    }
    
    if(soma_jedi > soma_sith)
    {
        printf("Jedi\n");
    }
    if(soma_jedi < soma_sith)
    {
        printf("Sith\n");
    }
    if(soma_jedi == soma_sith)
    {
        printf("Empate\n");
    }
    return 0;
}