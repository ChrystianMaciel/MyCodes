#include <stdio.h>
int main(){
    
    char por_baixo_ou_por_cima = 0;
    int forca_atleta = 0;
    scanf(" %c %d", &por_baixo_ou_por_cima, &forca_atleta);
    
    int tipo_de_saque = 0;
    
    if(por_baixo_ou_por_cima == 'b')
        tipo_de_saque = 20;    
    if(por_baixo_ou_por_cima == 'c')
        tipo_de_saque = 18;
    
    int P = ((forca_atleta * tipo_de_saque) - 80) / 10;
    
    if(P < 150)
    {
        printf("Fraco, nem passou\n");
    }
    if(P >=150 && P < 180)
    {
        printf("Perfeito\n");
    }
    if(P >= 180 && P < 210)
    {
        printf("Satisfeito\n");
    }
    if(P > 210)
    {
        printf("Muito forte, bola fora\n");
    }
    return 0;
}