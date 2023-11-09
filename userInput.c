#include<stdio.h>

int main(void)
{
	char myChar;
	
	printf("===========Menu============\n  H. Say 'Hello World' \n  I. Install Malware\n  D. Delete System 32\n  M. Mute all mics\n  Q. Quit after injecting hax\n===========Menu============\n");
	
	printf("Enter the letter associated with your choice: ");
	scanf("%c", &myChar);
	
	printf("You entered the letter: %c\n", myChar);
	
	if(myChar == 'H')
	{
		printf("Hello World\n");
	}
	else if(myChar == 'I')
	{
		printf("Installing malware....\n");
	}
	else if(myChar == 'D')
	{
		printf("Deleting System32....\n");
	}
	else if(myChar == 'M')
	{
		printf("All mics muted forever..\n");
	}
	else if(myChar == 'Q')
	{
		printf("Quitting program....\n");
	}
	
	return 0;
}
