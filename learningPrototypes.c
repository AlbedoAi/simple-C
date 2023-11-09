#include<stdio.h>
#include<stdio_ext.h>
#include <string.h>
void functionA(void);
void functionB(void);

//int functionA(int);//prototype to accept integer
//int fucntionB(int);

//int functionA(int[row][col]);//prototype to accept 2d integer array with rows and col
//int fucntionB(int[row][col]);

void functionA(void)
{
	int value = 100;
	printf("[FUNA] The value now is %d\n", value);
	
	value += 1;
}

void functionB(void)
{
	static int value = 100;
	printf("[FUNB] The value now is %d\n", value);
	
	value += 1;
}

int main(void)
{
	for(int i = 0; i < 5; i++)
	{
		functionA();
	}
	printf("\n");
	for(int i = 0; i < 5; i++)
	{
		functionB();
	}
}
