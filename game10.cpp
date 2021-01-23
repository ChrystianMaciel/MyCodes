#include <stdio.h>
int main(){
    
    int N = 0;
    int D = 0;
    int A = 0;
    
    scanf("%d %d %d", &N, &D, &A);
    
    if(A > D)
    {
	printf("%d\n", N - A + D);
    }
    else
    {
        printf("%d\n", D - A);
    }
    return 0;
}