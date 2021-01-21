#include <stdio.h>
#include <math.h>
int main(){
	
	float X1 = 0;
	float Y1 = 0;
	float X2 = 0;
	float Y2 = 0;
	
	scanf("%f %f %f %f", &X1, &Y1, &X2, &Y2);
	
	float distancia = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2) );
	
	printf("%.2f\n", distancia);   	
	
	
	return 0;
}