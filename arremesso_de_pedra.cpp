#include <stdio.h>
int main(){
    
    int N = 0;
    int A = 0;
    int B = 0;
    int melhor_distancia = 0;
    scanf("%d", &N);
    int D = 0;
    int ganhador = -1;
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d %d", &A, &B);
        if((A >= 10) && (B >= 10))
        {
            D = A - B;
            
            if(D < 0)
            {
                D = D * -1;
            }
            
            if((ganhador == -1) || (D < melhor_distancia))
            {
                ganhador = i;
                melhor_distancia = D;
            }    
        }    
    }
    if(ganhador != -1)
    {
        printf("%d\n", ganhador);
    }
    else
    {
        printf("sem ganhador\n");
    }
    
    return 0;
}