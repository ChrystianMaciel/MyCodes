#include <stdio.h>
int main(){
    
    int jog1 = 0;
    int jog2 = 0;
    
    scanf("%d %d", &jog1, &jog2);
    
    if(jog1 == jog2)
    {
        printf("Empate\n");
    }
    else if(((jog2 - jog1 + 15) % 15) <= 7)
    {
        printf("Jogador 1\n");
    }
    else
    {
        printf("Jogador 2\n");
    }
    
    return 0;
}