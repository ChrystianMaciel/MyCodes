#include <stdio.h>
int main(){
    
    float salario_atual = 0;
    float novo_salario = 0;
    
    scanf("%f %f", &salario_atual, &novo_salario);
    
    if(salario_atual <= 1000)
    {
        novo_salario = salario_atual * 1.20;
    }
    else if(salario_atual <= 1500)
    {
        novo_salario = salario_atual * 1.15;
    }
    else if(salario_atual <= 2000)
    {
        novo_salario = salario_atual * 1.10;
    }
    else 
    {
        novo_salario = salario_atual * 1.05;
    }
    
    printf("%.2f\n", novo_salario);
    
    return 0;
}