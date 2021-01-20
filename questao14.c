#include <stdio.h>
int main(){
	int valor1;
	int valor2;
	int valor3;
	int quantigual;   	
	
	if(valor1 == valor2)
	{
		quantigual = 2;
	}
	if(valor1 == valor3)
	{
		quantigual = 2;
	}	
	if(valor2 == valor3)
	{
		quantigual = 2;
	}	
	if(valor1 == valor2 && valor2 == valor3)
	{
		quantigual = 3;
	}	
	
	printf("%d\n", quantigual);
	return 0;
}