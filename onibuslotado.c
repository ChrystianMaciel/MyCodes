#include <stdio.h>
int main(){
    
    int auxiliar = 0;
    int C = 0;
    
    scanf("%d %d", &auxiliar, &C);
    
    while(auxiliar < 2 * C)
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
            else if(auxiliar - C * 2)
            {
                printf("lotado\n");
            }
            else
            {
                printf("hora de partir\n");
                auxiliar++;
            }    
		}	
		return 0;
}

/*#include <stdio.h>
int main(){
    
    int C = 0;
    
    scanf("%d", &C);
    
    int auxiliar = 0;
    for(auxiliar < 2 * C; auxiliar <= 5; auxiliar++)
        {
            int M = 0;
            auxiliar = auxiliar + M;
            if(auxiliar == 0)
            {
                printf("vazio\n");
            }
            else if(auxiliar < C)
            {
                printf("ainda cabe\n");
            }
            else if(auxiliar < 2 * C)
            {
                printf("lotado\n");
            }
            else
            {
                printf("hora de partir\n");
            }
        }   
    return 0;
}*/