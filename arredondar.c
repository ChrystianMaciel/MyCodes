#include <stdio.h>
#include <math.h>

int main(){
    
    char op = 0;
    float num = 0;
    
    scanf(" %c %f", &op, &num);
    
    if(op == 'c')
    {
        printf("%.f\n", ceil(num));
    }
    if(op == 'f')
    {
        printf("%.f\n", floor(num));  
    }
    if(op == 'r')
    {
        printf("%.f\n", round(num));
    }
    return 0;
}