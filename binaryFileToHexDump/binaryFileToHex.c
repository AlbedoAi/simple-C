#include <stdio.h>
#include <string.h>

//prototypes
void Ascii(char c);
void contents(FILE *f);
void magicHex(unsigned char *magic);
void magicAscii(unsigned char *magic);
void Ascii16(unsigned char *line, int len);
int Hex8(unsigned char *line, int start, int len);
void border();
void printLine(FILE *f, unsigned int offset);

//globals
int totalBytes = 0; // number of bytes in the file
int printNum = 0; // number of printable ascii bytes in the file

int main()
{
	int percentage;
   	char file[100];
    unsigned char magic[4];
	FILE *input;
	printf("Enter filename of binary to hexdump: ");

	fgets(file, 100, stdin); // read string
	file[strlen(file) - 1] = '\0';
    input = fopen(file, "rb"); // opening file as binary

    if (input == NULL) // file error
	{
       	printf("Error opening file \"%s\"\n", file);
		return 1;
    }

	fread(magic, 1, 4, input); // read 4 bytes from file
	printf("\nMagic number: ");
	magicHex(magic); //prints it as hex
	printf(" FileType: ");
	magicAscii(magic); // prints it as ascii
	printf("\n");
	fseek(input, 0, SEEK_SET);
	contents(input); // print the contents
	printf("Magic Number: 0x");
	magicHex(magic); // print the hex
    printf("\n");

   	//prints the end
    percentage = 100 * printNum / totalBytes;
    if (percentage >= 75)
    {
        printf("This file is definitely a text file: >= 75%% ascii\n");
    }
    else if (percentage >= 25)
    {
        printf("This file is probably a text file: between 25%% and 74%% ascii\n");
    }
    else
    {
        printf("This file is definitely a binary file: < 25%% ascii\n");
    }

	fclose(input);//closes the file
	return 0;
}

void Ascii(char c)
{
    	if (c >= 32 && c < 127)
    	{
        	printf("%c", c);

    	}
    	else
    	{
        	printf(".");
    	}

}

void magicHex(unsigned char *magic)
{
	int i;
    for (i = 0; i < 4; i++)
    {
        printf("%02X", magic[i]); // print bytes as hex
    }
}

void magicAscii(unsigned char *magic)
{
    int i;
    for (i = 0; i < 4; i++)
    {
		Ascii(magic[i]); // print bytes as ascii
    }
}

void border()
{
	int i;
    for (i = 0; i < 79; i++)
    {
    	printf("=");
    }
    printf("\n");
}


int Hex8(unsigned char *line, int start, int len)
{
    int i;
    int j = start;//current pos
    for (i = 0; i < 8; i++)
    {
        if (j < len)
        {
            printf(" %02X", line[j]); // print as hex
            j++;
        }
        else
        {
            printf(" ");
        }
    }
    return j; // returns last
}

void Ascii16(unsigned char *line, int len)
{
    int i;
    int j = 0; // position in line
    for (i = 0; i < 16; i++)
    {
        if (j < len)
        {
			Ascii(line[j]);
            if (line[j] >= 32 && line[j] < 127)
                printNum++;
            j++;
        }
        else
        {
            printf(" ");
        }
    }
}

void printLine(FILE *f, unsigned int offset)
{
    unsigned char line[16];
    int nread;
    int pos;
    printf("|");
    printf(" %06x ", offset);
    printf("|");
    nread = fread(line, 1, 16, f);
    totalBytes += nread;
    pos = Hex8(line, 0, nread);
    printf(" ");
    Hex8(line, pos, nread);
    printf(" |");
    Ascii16(line, nread);
    printf("|\n");
}

void contents(FILE *f)
{
    unsigned int offset = 0;
    int nline;
    border();
    printf("| Offset |");
    printf(" Hexadecimal Data ");
    printf("|Character Format|\n");
    border();
    while(!feof(f))
    {
        for (nline = 0; nline < 10 && !feof(f); nline++)
        {
            printLine(f, offset);
            offset += 16;
        }
        if (!feof(f))
        {
            printf("\t\t\t10 Lines Printed...Pausing\n");
            printf("\t\t\tPRESS ENTER TO CONTINUE\n");
            getchar();
        }
    }
    printf("\n");
}

