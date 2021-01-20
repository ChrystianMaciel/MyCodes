#include <stdio.h>
int main (){
	
    int m = 0;
    int a = 0;	
    int b = 0;
	
    scanf("%d %d %d", &m, &a, &b);
	
	int c = m - (a + b);
	
    //int maior = a > b ? a : b;
    //maior = c > maior ? c : maior;
	
	//printf("%d\n", maior);

   	int maior = a;
	if(b > maior)
		maior = b;
	if(c > maior)
		maior = c;
	printf("%d\n", maior);
	
	return 0;		
}