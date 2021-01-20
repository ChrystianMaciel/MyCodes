#include <stdio.h>
int main (){
	
    int m = 0;
    int a = 0;	
    int b = 0;
	
    scanf("%d %d %d", &m, &a, &b);
	
	int c = m - (a + b);
	
    int maior = a > b ? a : b;
    maior = c > maior ? c : maior;
	
	printf("%d\n", maior);
/*#include <stdio.h>
int main (){
	
    int m = 0;
    int a = 0;	
    int b = 0;
	
    scanf("%d %d %d", &m, &a, &b);
	
	int c = m - (a + b);
	
	if(c > b || a ? c : b || a)
	{
		printf("%d\n", c);
	}*/	
	
	return 0;
		
}