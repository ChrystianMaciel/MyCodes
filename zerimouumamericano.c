/*#include <stdio.h>

int main(){
    int op1 = 0;
    int op2 = 0;
    int op3 = 0;
    int op4 = 0;
    scanf("%d %d %d %d", &op1, &op2, &op3, &op4);
    int soma = op1 + op2 + op3 + op4;
    if(soma == 0)
        puts("nenhum");
    else{
        int ganhador = (soma - 1) % 4 + 1;
        printf("jog%d\n", ganhador);
    }
}*/
#include <stdio.h>
int main(){
    
    int jog1 = 0;
    int jog2 = 0;
    int jog3 = 0;
    int jog4 = 0;
    
    scanf("%d %d %d %d", &jog1, &jog2, &jog3, &jog4);
    
    int soma = jog1 + jog2 + jog3 + jog4;
    if(soma == 0)
	{
	    printf("nenhum\n");	   	
	}
    else
	{
		int ganhador = (soma - 1) % 4 + 1;
		printf("jog%d\n", ganhador);
	}
    return 0;
}

/*#include <stdio.h>
int main(){
    
    int jog1 = 0;
    int jog2 = 0;
    int jog3 = 0;
    int jog4 = 0;
    
    scanf("%d %d %d %d", &jog1, &jog2, &jog3, &jog4);
    
    int soma = jog1 + jog2 + jog3 + jog4;
    if(soma == 0)
	{
	    printf("nenhum\n");	   	
	}
    if(soma == 1)
    {
        printf("jog1\n");
    }
    if(soma == 2)
    {
        printf("jog2\n");
    }
    if(soma == 3)
    {
        printf("jog3\n");
    }
    if(soma == 8)
    {
        printf("jog4\n");
    }
    if(soma == 4)
    {
        printf("jog4\n");
    }
    if(soma == 5)
    {
        printf("jog1\n");
    }
    if(soma == 14)
    {
        printf("jog2\n");
    }
    return 0;
}*/