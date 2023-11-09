#include<stdio.h>

int main(void)
{
	int num = 0, sum = 0, avg = 0;
	float fNum = 0, fSum = 0, fAvg = 0;

	for(int i = 1; i < 6; ++i)
	{
		printf("Enter number %d: ", i);
		scanf("%i", &num);
		sum = num + sum;
	}
	
	avg = sum/5;
	
	printf("The sum of the number is %d\n", sum);
	printf("The average of the numbers is %d\n", avg);
	
	
	printf("Intiating float number test!\n");
	for(int i = 1; i < 6; ++i)
	{
		printf("Enter your float number %d: ", i);
		scanf("%f", &fNum);
		fSum = fNum + fSum;
	}
	
	fAvg = fSum/5;
	
	printf("The sum of the number is %f\n", fSum);
	printf("The average of the numbers is %f\n", fAvg);
	
	return 0;
}
