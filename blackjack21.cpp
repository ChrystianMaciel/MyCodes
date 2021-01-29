#include <stdio.h>
int main(){
    
    int num_carta = 0;
    int as = 0;
    int total = 0;
    int auxiliar = 1;
    
    scanf("%d", &num_carta);
    
    for(auxiliar = 1; auxiliar <= num_carta; auxiliar++)
    {
        int carta = 0;
        scanf("%d", &carta);
        if(carta == 1)    
        {    
            as++;
            total = total + 11;
        }
        else if(carta >= 10)
        {
            total += 10;
        }
        else
        {
            total = carta + total;
        }
    }
    while(total > 21 && as > 0)
    {    
        total = total - 10;
        as--;
    }
    printf("%d\n", total);
    return 0;
}