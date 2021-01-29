#include <stdio.h>
int main(){
    
    int dia = 0;
    int hora = 0;
    int minuto = 0;
    
    scanf("%d %d %d", &dia, &hora, &minuto);
    
    if((dia > 1 && dia < 7) && (hora >= 8 && hora <= 11 || hora >= 14 && hora <= 17) && (minuto >= 0 && minuto <= 59))
    {
        printf("SIM\n");
    }
    else if((hora >= 8 && hora <= 11) && (minuto >= 0 && minuto <= 59))
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }
    
    return 0;
}