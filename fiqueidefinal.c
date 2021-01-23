#include <stdio.h>
int main(){
    
    int n1 = 0;
    int n2 = 0;
    
    scanf("%d %d", &n1, &n2);
    
    int media = (n1 + n2) / 2;
    
    if(media >= 7)
    {
        printf("aprovado\n");
    }
    if(media < 4)
    {
        printf("reprovado\n");
    }
    if(media > 4 &&  media < 7)
    {
        int mediafinal = 0;
        int mediaparcial = 0;
        scanf("%d %d", &mediafinal, &mediaparcial);
        
        mediaparcial = media;
        mediafinal = (mediaparcial + mediafinal) / 2;
        
        if(mediafinal >= 5)
        {
            printf("aprovado na final\n");
        }
        else
        {
            printf("reprovado na final\n");
        }
        
    }
    return 0;
}