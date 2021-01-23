#include <stdio.h>
int main(){
	
	int P = 0;
	int D_1 = 0;
	int D_2 = 0;
	int Vencedor;
	
	scanf ("%d %d %d %d", &P, &D_1, &D_2, &Vencedor);
	
	if((D_1 + D_2) % 2 == P)
	    Vencedor = 0;
	
	else
	Vencedor = 1;
	printf("%d\n", Vencedor);
	
	return 0;
}