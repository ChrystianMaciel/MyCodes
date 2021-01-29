#include <stdio.h>
int main(){
    
    int A = 0;
    int B = 0;
    
    scanf("%d %d", &A, &B);
    
   printf("[ ");
    int aux = 0;
	while(aux <= ( B - A ))
    {
    	aux++;
        printf("%d %d ", A + aux, B - aux);   
    }
        
   printf("]\n");
    
    return 0;
}

/*#include <stdio.h>
int main(){
    
    int A = 0;
    int B = 0;
    
    scanf("%d %d", &A, &B);
    
   printf("[ ");
    for(int aux = 0; aux <= ( B - A ); aux++ )
    {
        printf("%d %d ", A + aux, B - aux);   
    }
        
   printf("]\n");
    
    return 0;
}*/