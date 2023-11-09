#include<stdio.h>

int main(void)
{
	int oddNumber, row;
	printf("Enter an odd number: ");
	scanf("%i", &oddNumber);
	
	if(oddNumber%2 == 0)
	{
		printf("You did not enter a valid odd number: %i", oddNumber);
	}
	else
	{
		for(int i = 0; i <= oddNumber; i++)
		{
			
			if(i%2 == 0)
			{
				printf("/");
				row = 0;
			}
			else
			{
				printf("\\");
				row = 1;
			}
			for(int j = 0; j < oddNumber; j++)
			{
				if(j%2 == 0 && row == 0)
				{
					printf("\\");
					row++;
				}	
				else
				{
					if(row == 0)
					{
						printf("\\");
						row++;
					}
					else
					{
						printf("/");
						row--;
					}
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}
