#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

int main (void)
{
	char choice;
	char string[60];
	while(choice != 113)
	{
		printf("----------Menu----------\n 1. Reverse Titlecase\n 2. UpperToLower toggle\n q. Quit\n----------Menu----------\n");
		printf("Enter a choice: ");
		scanf("%c", &choice);
		__fpurge(stdin);
	
		if(choice == 49)
		{
			printf("Enter a string no more than 40 characters: ");
			fgets(string, 41, stdin);
			printf("***Reverse Titlecase: ");
			
			if(string[0] <= 122 && string[0] >= 97)//Looks at the first letter to see if its upper or lower if lower then 
			{
				string[0] = string[0];// make it eual to itself meaning no change to it
			}
			else//otherwise turn it to lower case by adding 0x20 to it.
			{
				string[0] += 0x20;
			}
			
			for(int i = 0; string[i] != '\0'; i++)//loop over the array
			{
				if(string[i] == 32)//find the space
				{
					if(string[i + 1] <= 90 && string[i + 1] >= 65)//check if after the space is an uppercase letter
					{
						string[i + 1] += 0x20;//if upper make it lower
					}
				}
				else if(string[i+1] <= 122 && string[i+1] >= 97)//otherwise check if its lower
				{		
						string[i+1] -= 0x20;//change it to upper
				}	
			}
			printf("String: %s\n", string);	
		}
		else if(choice == 50)
		{
			printf("Enter a string no more than 40 characters: ");
			fgets(string, 41, stdin);
			
			printf("***UpperToLower Toggle: ");
			for(int i = 0; i < sizeof(string); i++)
			{
				if(string[i] <= 90 && string[i] >= 65)
				{
					printf("%c", string[i]+0x20);
				}
				else if(string[i] <= 122 && string[i] >= 97)
				{
					printf("%c", string[i]-0x20);
				}
				else
				{
					printf("%c", string[i]);
				}
				
				
			}	
			printf("\n");		
		}
		else if(choice == 113)
		{
			printf("Quitting...\n");
			break;
		}
		else
		{
			printf("\n****Invalid choice please select from the menu.\n");
		}
	}
}
