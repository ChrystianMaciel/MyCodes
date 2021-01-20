#include <stdio.h>
int main(){
    
    int numero_n = 0;    
    
    scanf("%d", &numero_n);
    
    numero_n = (numero_n + 1) * (numero_n + 2) / 2;
    
    printf("%d\n", numero_n);
    
    return 0;
}