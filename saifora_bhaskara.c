#include <stdio.h>
#include <math.h>
int main(){
    
    float A = 0;
    float B = 0;
    float C = 0;
    scanf("%f %f %f", &A, &B, &C);
    float delta = (B * B) - 4 * A * C;
    
    float rais_pos = (-B + sqrt(delta)) / (2 * A);
    float rais_neg = (-B - sqrt(delta)) / (2 * A);
    
    if(delta > 0)
    {
        printf("%.2f\n%.2f\n", rais_pos, rais_neg);
    }
    else if(delta == 0)
    {
        printf("%.2f\n", rais_pos);
    }
    else
    {
        printf("nao ha raiz real\n");   
    }
    return 0;
}