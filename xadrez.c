#include <stdio.h>
int main(){
	
	int Linhas = 0;
	int Colunas = 0;
	
	scanf("%d %d", &Linhas, &Colunas);
	
	int Linha_saida = (1 + (Linhas - 1) + (Colunas + 1)) % 2;
	
	printf("%d\n", Linha_saida);
	
	return 0;
}