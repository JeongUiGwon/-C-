#include <stdio.h>

int main(void)
{
	int a = 0;					

	do                          
	{
		scanf("%d", &a);		
	} while (a < 0);			
	printf("a : %d\n", a);		

	return 0;
}