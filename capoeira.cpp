#include <stdio.h>
int main(){
    
    int N = 0;
    int vet[N];
    int size = sizeof(vet) / sizeof(int);
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &size);
    }
    printf("[ ");
    for(int i = N - 1; i >= 0; i--)
    {
        printf("%d ", vet[i]);
    }
    printf("]\n");
    
    
    return 0;
}