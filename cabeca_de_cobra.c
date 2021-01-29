#include <stdio.h>
int main(){
    
    int N = 0;
    int X = 0;
    int Y = 0;
    char C = 0; 
    int S = 0;
    
    scanf("%d %d %d %c %d", &N, &X, &Y, &C, &S);
    
    if(C == 'R')
    {
        X = X + S;
    }
    else if(C == 'L')
    {
        X = X - S;
    }
    else if(C == 'U')
    {
        Y = Y - S;
    }
    else
    {
        Y = Y + S;    
    }
    
    X = X % N;
    Y = Y % N;
    if(X < 0)
    {
        X = X + N;
    }
    if(Y < 0)
    {
        Y =  Y + N;
    }
    printf("%d %d\n", X, Y);
    return 0;
}
