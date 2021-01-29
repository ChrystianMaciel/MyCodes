#include <stdio.h>
int main(){
    
    float chute_jog1 = 0;
    char chute_jog2 = 0;
    float valor_real = 0;
    
    scanf("%f  %c %f", &chute_jog1, &chute_jog2, &valor_real);
    
    if(((chute_jog1 > valor_real) && (chute_jog2 == 'm')) || ((chute_jog1 < valor_real) && (chute_jog2 == 'M')))
    {
        printf("segundo\n");
    }
    else
    {
        printf("primeiro\n");
    }
     
    return 0;
}