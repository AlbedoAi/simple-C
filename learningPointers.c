#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

int main (void)
{
	char c[6];
	int values[6];
	int count = 0;
	
	printf("===========================================================\n");
	for(int i = 0; i < 6; i++)
	{
		printf("Enter integer number %i: ", i + 1);
		scanf("%i", &values[i]);
		__fpurge(stdin);	
	}
	
	printf("===========================================================\nEnter 6 characters seperated by space: ");
	do 
	{
        scanf("%c", &c[count++]);
    } while (getchar() != '\n' && count < 100);
    printf("===========================================================\n");
    
	printf("Elements\tAddress\t\tHexdecimal Value\tDecimal Value\n");
	for(int i = 0; i < 6; i++) 
	{
		printf("Integer[%i]\t%p\t0x%X\t \t\t%d\n", i, (void *)&values[i], values[i], values[i]);
		
	} 
	printf("===========================================================\n");
	printf("Elements\tAddress\t\tHexdecimal Value\tCharacter Value\n");
	for(int i = 0; i < 6; i++) 
	{
		printf("Integer[%i]\t%p\t0x%X\t \t\t%c\n", i, (void *)&c[i], c[i], c[i]);
		
	} 
	printf("===========================================================\n");
}
