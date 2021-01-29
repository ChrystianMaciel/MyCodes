#include <stdio.h>
int main(){
    
    int P = 0;
    int S = 0;
    int E = 0;
    
    scanf("%d %d %d", &P, &S, &E);
    
    int pos_sapo = 0;
    while(pos_sapo < P)
    {
        printf("%d ", pos_sapo);
        pos_sapo = pos_sapo + S;
        
        if(pos_sapo < P)
        {
        printf("%d\n", pos_sapo);
        pos_sapo = pos_sapo - E;
        }    
    }
    printf("saiu\n");
    return 0;
}