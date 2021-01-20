#include <stdio.h>

int main()
{
    int num1, num2;
	num1 = 50;
	num2 = 30;
	
	if(num1 % 3 || 5 == 0)
	{
        printf("sim\n");
    }
	else if(num2 % 3 || 5 == 0)
	{
		printf("sim\n");
	}	
	else
    {
        printf("nao\n");
    }

    return 0;
}