#include <stdio.h>
int main(){
    
    float num1 = 0;
    float num2 = 0;
    
    scanf("%f %f", &num1, &num2);
    
    int divisao_inteira = num1 / num2;
    int resto_divisao = num1 / num2;
    float divisao_quebrada = num1 / num2;
    
    printf("%d\n", divisao_inteira);
    printf("%d\n", resto_divisao);
    printf("%.2f\n", divisao_quebrada);
    
    return 0;
}