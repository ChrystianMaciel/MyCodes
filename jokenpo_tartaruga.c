#include <stdio.h>
int main(){
    
    char op1 = 0; 
    char op2 = 0;
    scanf(" %c  %c", &op1, &op2);
    
    if((op1 == 'R' && op2 == 'S') || (op1 == 'P' && op2 == 'R') || (op1 == 'S' && op2 == 'P'))
    {
        printf("jog1\n");   
    }
    else if((op2 == 'R' && op1 == 'S') || (op2 == 'P' && op1 == 'R') || (op2 == 'S' && op1 == 'P'))
    {
        printf("jog2\n");   
    }
    else if(op1 == op2)
    {
        printf("empate\n");
    }
    return 0;
}