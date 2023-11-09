#include<stdio.h>

int main(void)
{
	unsigned short int aval = 65532; // declaring an unsigned short val and giving it a value
	unsigned short int bval = 0;
	int cval; // declaring an int data type
	
	printf("First printf statement: \n"); //printing a string
	printf("\taval: %d\n\tbval: %d\n\tcval: %d\n", aval, bval, cval); //formating and printing the declared value with their data
	
	bval = aval + 4; //adding 4 to the unsinged short value and storing it in the other usinged var
	cval = aval + 5; //adding 5 to the short aval but storing it in an int
	
	printf("Second printf statement: \n"); //printing the value out to be displayed
	printf("\taval: %d\n\tbval: %d\n\tcval: %d\n", aval, bval, cval);

	return 0;
	
}

