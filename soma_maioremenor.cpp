#include <stdio.h>
int main(){
    
    int maior = 0;
    int menor = 100;
    
    for(int i = 0; i < 5; i++)
    {
        int aux = 0;
        scanf("%d", &aux);
        if(aux > maior)
            maior = aux;
        if(aux < menor)
            menor = aux;
    }
    printf("%d\n", maior + menor);
    return 0;
}