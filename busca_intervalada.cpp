#include <stdio.h>
int main(){
    
    int T = 0;
    int menor = 0;
    int maior = 0;
    scanf("%d %d %d", &T, &menor, &maior);
    int auxiliar = 0;
    int cont = 0;
    for(int i = 0; i < T; i++)
    {
        scanf("%d", &auxiliar);
        if((auxiliar >= menor) && (auxiliar <= maior))
        {
            cont++;
        }    
    }
   
	printf("%d\n", cont);
    
    return 0;
}