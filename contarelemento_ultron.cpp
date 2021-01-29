#include <stdio.h>
int main(){
    
   int X = 0;
   int N = 0;
   scanf("%d %d", &X, &N);
   
   int cont = 0;
   for(int i = 0; i < N; i++)
    {
        int aux = 0;
        scanf("%d",  &aux);
        if(aux == X)
        cont = cont + 1;
    }
    printf("%d\n", cont);   
    return 0;  
}