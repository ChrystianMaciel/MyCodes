#include <stdio.h>
int main(){
    
    int angulo = 0;
    
    scanf("%d", &angulo);
    
    angulo = angulo % 360;
    
    if(angulo < 0)
    angulo = angulo + 360;
    
    printf("%d\n", angulo);	
    
    return 0;
}