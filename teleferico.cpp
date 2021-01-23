#include <stdio.h>
int main(){
    
    int Capacidade = 0;
    int Alunos_da_turma = 0;
    
    scanf("%d %d", &Capacidade, &Alunos_da_turma);
    
    if(Alunos_da_turma % (Capacidade - 1) == 0)
	{
		printf("%d\n", Alunos_da_turma / (Capacidade - 1));
	}
    else
	{
		printf("%d\n", Alunos_da_turma / (Capacidade - 1) + 1);
	}
    
    return 0;
}