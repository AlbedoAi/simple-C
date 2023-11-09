#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include"learningHeaders.h"//header file with all prototypes and defines

int main(void)
{
	//2d arrays that will store the normals words and its reversed
	char words[strings][maxLength];
	char reverseWords[strings][maxLength];
	//loops for five elements
	for(int i = 0; i < strings; i++)
	{
		printf("Enter string enclosed by double quotes : ");
		fgets(words[i], maxLength, stdin);
		strip(words);//strips the array of any newline characters and makes it all lowercase
		__fpurge(stdin);

	}
	printf("\t**Palindrome Finder**\n");
	printf("Amount of Palindromes found: %i\n", isPalindrome(words, reverseWords));//calls the isPalindrome function to find palindromes
}

int strip(char words[strings][maxLength])
{
	//loops over array
	for(int i = 0; i < strings; i++)
	{
		for(int j = 0; words[i][j] != '\0'; j++)
		{
			if(words[i][j] <= 90 && words[i][j] >= 65)
			{
				//makes it lowercase
				words[i][j] += 32;
			}
			else if(words[i][j] == 10)//replaces the /n with null
			{
				words[i][j] = '\0';
			}
		}

	}
}

int getStrings(char words[strings][maxLength])
{
	int count = 0;
	int highestCount = 0;
	//loops over array
	for(int i = 0; i < strings; i++)
	{
		count = strlen(words[i]);//sets the length to the var
		if(count > highestCount)//checks if its higher than the previous val
		{
			highestCount = count;//sets it to the highest val
		}
	}
	return highestCount;//returns the val
}

int reverseStr(char words[strings][maxLength], char reverseWords[strings][maxLength], int a)
{

	int stringLength = strlen(words[a]), flag = 0;
	for(int j = (stringLength - 1), c = 0; j >= 0; j--, c++)//loops backward
	{
		reverseWords[a][c] = words[a][j];//copys the words from the back of array 1 to array2
	}
	//checks to see if palindrome
	for(int j = 0; j < stringLength; j++)
	{
		//checks to see if it matches
		if(words[a][j] == reverseWords[a][j])
		{

		}
		else
		{
			flag = 1;//doesnt match so flags it
		}
	}
	if(flag == 0)
	{
		return 1;//returns the value depending on the if the flag was raised or not
	}
	else
	{
		return 0;
	}
}

int isPalindrome(char words[strings][maxLength], char reverseWords[strings][maxLength])
{
	char c[maxLength];
	int index = 0, returnValue = 2, palindromesFound = 0;
	//loops over the array
	for(int j = 0; j < strings; j++)
	{
		//gets the val from the function to see if it palindrome or not
		returnValue = reverseStr(words, reverseWords, index);
		if(returnValue == 0)
		{
			printf("\tThe string %s is not a palindrome\n", words[j]);
		}
		else
		{
			printf("\tThe string %s is a palindrome\n", words[j]);
			palindromesFound++;
		}
		index++;
	}
	//loop that gets the char that is the longest
	for(int i = 0; i < strings; i++)
	{
		for(int j = 0; j < maxLength; j++)
		{
			if(strlen(words[i]) == getStrings(words))
			{
				c[j] = words[i][j];
			}
		}

	}
	printf("Longest string found is %i characters long and is called %s\n", getStrings(words), c);
	return palindromesFound;//returns palindromes found
}

