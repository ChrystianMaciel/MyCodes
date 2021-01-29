#include <stdio.h>
int main(){
    
    char q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    
    scanf("%c %c %c %c", &q1, &q2, &q3, &q4);
    int res_final = 0;
    
    if(q1 == 'd')
	{
        res_final++;    
    }
    if(q2 == 'a')
	{
        res_final++;
    }
    if(q3 == 'c')
	{
        res_final++;
    }
    if(q4 == 'd')
	{
        res_final++;
    }
    
    
    if(res_final == 0)
    {
        printf("Nunca assistiu\n");
    }
    if(res_final == 1)
    {
        printf("Ja ouviu falar\n");
    }
    if(res_final == 2)
    {
        printf("Interessado no assunto\n");
    }
    if(res_final == 3)
    {
        printf("Fa\n");
    }
    if(res_final == 4)
    {
        printf("Super Fa\n");
    }
    return 0;
}