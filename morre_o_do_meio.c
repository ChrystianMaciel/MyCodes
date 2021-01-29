#include <stdio.h>
int main(){
    
    int valor1 = 0;
    int valor2 = 0;
    int valor3 = 0;
    
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    
    int menor_valor = valor1;
    int maior_valor = valor1;
    
    if(valor2 < menor_valor)
        menor_valor = valor2;
    if(valor2 > maior_valor)    
        maior_valor = valor2;
    if(valor3 <  menor_valor)
        menor_valor = valor3;
    if(valor3 > maior_valor)
        maior_valor = valor3;
    printf("%d\n", valor1 + valor2 + valor3 - maior_valor - menor_valor);
    return 0;
}