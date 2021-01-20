#include <stdio.h>

int main(){
	
	int a, b, maximo;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	
	printf("Digite outro numero inteiro: ");
	scanf("%d", &b);
	
	
	//maximo = a > b ? a : b; 
	
	if(a > b)
	{
		maximo = a;
	}
	else
	{
		maximo = b;
	}
	
	printf("O maior valor digitado foi: %d\n", maximo);
	
	return 0;
}