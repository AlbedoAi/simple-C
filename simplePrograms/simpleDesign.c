/*
Date: September 27, 2022
Description: Program to create a desgin with given number value.
 */
#include<stdio.h>

int main()
{
	int length;
	int row = 0;
	printf("Enter how long you want your design: ");
	scanf("%i", &length);

	for(int i = 0; i < length; ++i)
	{
		row = i;
		for(int j = 0; j < length; j++)
		{
			if(i == 0 || i == length - 1)
			{
				printf("* ");
			}
			else if(j == 0 || j == length - 1)
			{
				printf("* ");
			}
			else if(row != 0)
			{
				printf("  ");
				row--;
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}

	return 0;
}
