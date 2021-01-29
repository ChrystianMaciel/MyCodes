#include <stdio.h>
int main(){
    
    int X = 0;
    scanf("%d", &X);
    
    long int i = 1, j = 1, aux = 0;
    if(X == 1 || X == 2)
    {
        printf("1\n");
    }
    else
    {
        for(int k = 3; k <= X; k++)
        {
            aux = i + j;
            i = j;
            j = aux;
        }
    
        printf("%ld\n", j);
    }
    return 0;
}