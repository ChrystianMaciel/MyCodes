#include <stdio.h>
int main (){
    
    int valor1, valor2, valor3, valor4;
    scanf("%d %d %d %d", &valor1, &valor2, &valor3, &valor4);
    
    int maior_valor = valor1;
    
    if(valor2 > maior_valor)
    maior_valor = valor2;
    
    if(valor3 > maior_valor)
    maior_valor = valor3;
    
    if(valor4 > maior_valor)
    maior_valor = valor4;
    
    printf("%d\n", maior_valor);

    return 0;
}