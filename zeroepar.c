#include <stdio.h>
int main(){
    
    int A = 0, B = 0;
    scanf("%d %d", &A, &B);
    
    int auxiliar = A;
    int soma = 0;
    
    while(auxiliar <= B)
    {
        if(auxiliar % 2 == 0)
        soma = soma + auxiliar;
        auxiliar = auxiliar + 1;
    }
    if(A > B)
    {
        printf("invalido\n");
    }
    else
    {
        printf("%d\n", soma);
    }
    
    return 0;
}