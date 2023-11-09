#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[])
{
	char myletter[10] = "\0";
	char ch;
	int i = 0;
	FILE *fptr = NULL;
	for(int count = 1; count < argc; count++)
	{
		if(strcmp(argv[count], "--letters") == 0)
		{
			strcpy(myletter, argv[count+1]);
		}
		if(strcmp(argv[count], "-f") == 0)
		{
			fptr = fopen(argv[count+1], "r");
			if(fptr == NULL)
			{
				fprintf(stderr, "File didnt open correctly");
				exit(-1);
			}
		}
	}
	char *ptr = myletter;
	char fromfile[40] = "\0";
	
	if(fptr)
	{
		while((ch = fgetc(fptr)) != EOF)
		{
			fscanf(fptr, "%s", fromfile);
			if(fromfile[0] == 'a')
			{
				printf("%c", fromfile[i]);
				i++;
			}
		}
	}
	printf("\n");
    return 0;
}

