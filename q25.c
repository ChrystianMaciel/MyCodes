#include <stdio.h>

int main()
{
    int num1, num2;
	num1 = 0;
	num2 = 0;
	scanf("%d %d", &num1, &num2);
	
	if(num1 % 3 == 0 && num1 % 5 == 0)
	{
        printf("sim\n");
    }
	else if(num2 % 3 == 0 && num2 % 5 == 0)
	{
		printf("sim\n");
	}	
	else
    {
        printf("nao\n");
    }

    return 0;
}


/*#include <stdio.h>

int main(){

    int num1, num2;
	num1 = 0;
	num2 = 0;
	scanf("%d %d", &num1, &num2);
	
	if((num1 % 3 == 0 || num1 % 5 == 0) && (num2 % 3 == 0 || num2 % 5 == 0))
    {    
        printf("sim\n");
    }
	else
    {
        printf("nao\n");
    }

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int num1, num2;
	num1 = 0;
	num2 = 0;
	scanf("%d %d", &num1, &num2);
	
	if(num1 % 3 == 0 && num1 % 5 == 0)
	{
        printf("sim\n");
    }
	else if(num2 % 3 == 0 && num2 % 5 == 0)
	{
		printf("sim\n");
	}	
	else
    {
        printf("nao\n");
    }

    return 0;
}*/