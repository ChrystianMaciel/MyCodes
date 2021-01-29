#include <stdio.h>
int main(){
    
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float trabalho = 0;
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &trabalho);
    
    if(n2 <= n1 && n2 <= n3)
        n2 = n1;
    else if(n3 <= n1 && n3 <= n2)
        n3 = n1;
    float media = (n2 + n3 + trabalho) / 3;
    if(media >= 7)
    {
        printf("Aprovado com %.1f\n", media);
    }
    else
    {
        printf("Final com %.1f\n", media);   
    }
    
    return 0;
}