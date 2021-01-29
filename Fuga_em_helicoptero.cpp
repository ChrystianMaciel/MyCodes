#include <stdio.h>
int main(){
    
    int Helic = 0, Policial = 0, Fugitivo = 0, Direcao = 0;
    scanf("%d %d %d %d", &Helic, &Policial, &Fugitivo, &Direcao);
    
    for(int i = 0; Fugitivo != Helic && Fugitivo != Policial; i++)
    {
        Fugitivo = Fugitivo + Direcao;
        if(Fugitivo < 0)
        {
            Fugitivo = 15;
        }
        if(Fugitivo > 15)
        {
            Fugitivo = 0;
            
        }
    }
    if(Fugitivo == Helic)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    
    return 0;
}