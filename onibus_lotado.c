#include <stdio.h>
int main(){
    
    int auxiliar = 0;
    int C = 0;
    
    scanf("%d", &C);
    
    while(auxiliar < (C * 2))
    {
        int M = 0;
        scanf("%d", &M);
        auxiliar = auxiliar + M;
            
        if(auxiliar == 0)
        {
            printf("vazio\n");
        }
        else if(auxiliar < C)
        {
            printf("ainda cabe\n");
        }
        else if(auxiliar < C * 2)
        {
            printf("lotado\n");
        }
        else
        {
            printf("hora de partir\n");
        }    
	}	
	return 0;
}