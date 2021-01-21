#include <stdio.h>
int main(){
    
    int n1 = 0;
    int n2 = 0;
    char operador = 0;
    
    scanf("%d %d %c", &n1, &n2, &operador);
    
    if(operador == '+')
    {
        printf("%d\n", n1 + n2);
    }
    if(operador == '-')
    {
        printf("%d\n", n1 - n2);  
    }
    if(operador == '*')
    {
        printf("%d\n", n1 * n2);
    }
    if(operador == '/' && n2 == 0)
    {
        printf("Operaçao invalida! Divisao por zero\n");
    }
    if(operador == '/' && n2 != 0) 
    {
        printf("%d\n", n1 / n2);
    }
    
    return 0;
}