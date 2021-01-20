/*#include <iostream>
using namespace std;
int main(){
	
	int dinheiro = 9;
	if(dinheiro > 10){
		cout << "Vou ao cinema!";
	}
	else{
		cout <<"Nao vou ao cinema!";
	}
	return 0;
}*/

#include <stdio.h>
int main(){
    
    int valor = 10; 
    scanf("%d", &valor);
    
    if(valor > 0)
    {
        printf("positivo\n");
    }
	if(valor < 0)
    {
        printf("negativo\n");
    }
    if(valor == 0)
    {
        printf("nulo\n");
    }
    return 0;
}