#include<stdio.h>

int main()
{
	float numX = 0;
	float numx = 0;
	int numy = 0;
	//Float Part
	for(int i = 0; i < 5; i++)
	{
		printf("Please enter a float number: ");
		scanf("%f", &numX);
		numx += numX;
	}
	
	printf("\t\tThe sum is %0.2f\n", numx);
	printf("\t\tThe average is %0.2f\n", numx/5);
	
	if(numx < 20.02)
	{
		printf("\t\tThe sum is less than 20.02\n");	
	}
	else if(numx == 20.02)
	{
		printf("\t\tThe sum is equal to 20.02\n");
	}
	else
	{
		printf("\t\tThe sum is greate than 20.02\n");
	}
	
	//Integer part
	//clearing the memory and reintializing the vars
	numx = 0;
	numX = 0;
	for(int i = 0; i < 5; i++)
	{
		printf("Please enter an integer: ");
		scanf("%f", &numX);
		numx += numX;
	}
	
	numy = numx;
	printf("\t\tThe sum is %0.2f\n", numx);
	printf("\t\tThe average is %0.2f\n", numx/5);
	if(numy%2 == 0)
	{
		printf("\t\tThe sum is even\n");	
	}
	else
	{
		printf("\t\tThe sum is odd\n");
	}
	return 0;
}
