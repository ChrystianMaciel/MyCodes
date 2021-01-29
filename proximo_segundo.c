#include <stdio.h>
int main(){
    
    int hora = 0;
    int minuto = 0;
    int segundo_inicial = 0;
    
    scanf("%d %d %d", &hora, &minuto, &segundo_inicial);
    
    if(segundo_inicial == 59){
        segundo_inicial = 00;
        if(minuto == 59)
        {
            minuto = 00;
            if(hora == 23)
            {
                hora = 00;
            }
            else    
            {
                hora++;
            }
        }
        else
        {
            minuto++;
        }
    }
    else
    {
        segundo_inicial++;    
    }
	
			
    printf("%02d %02d %02d\n", hora, minuto, segundo_inicial);
    return 0;
}