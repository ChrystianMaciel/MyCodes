#include <stdio.h>
int main(){
    
    int numperf = 0;
    
    scanf("%d", &numperf);
    
    for(int soma = 1;; soma--)
    {
        if(soma * soma == numperf)
        {
            printf("sim\n");
        
            break;
        }
    
        if(soma * soma > numperf)
        {
            printf("nao\n");
        
            break;
        }        
    
    }
    return 0;
}