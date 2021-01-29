#include <stdio.h>
int main(){
    
    int cont = 0;
    
    int digprocurado = 0, numcontato = 0;
    scanf("%d %d", &digprocurado, &numcontato);
    
    while(numcontato > 0)
    {
        if(numcontato % 10 == digprocurado)
        cont++;
        numcontato = numcontato / 10;
    }
    
    printf("%d\n", cont);
    return 0;
}