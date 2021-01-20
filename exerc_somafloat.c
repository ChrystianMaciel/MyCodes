#include <stdio.h>
int main(){
	
	float num1, num2, soma;
	
	printf("Digite um numero inteiro: ");
	scanf("%f", &num1);
	
	printf("Digite um segundo numero inteiro: ");
	scanf("%f", &num2);
	soma = num1 + num2;
	
	printf("Soma: %.2f\n", soma);
	
	return 0;
	
}