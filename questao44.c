#include <stdio.h>
int main(){
	
	int valor1 = 0;
	int valor2 = 0;
	
	scanf("%d", &valor1);
	scanf("%d", &valor2);
	
	int auxiliar = valor1;
	int soma = 0;
	
	if(valor1  >  valor2)
	{
		printf("invalido\n");
	}
	else
	{
		int auxiliar = valor1;
		
		while(auxiliar <= valor2)
		{
			if((auxiliar % 2 == 0) && (auxiliar % 3 == 0))
				soma = soma + auxiliar;
				auxiliar = auxiliar + 1;
	    }
	printf("%d\n", soma);
	}  
    return 0;	
}	