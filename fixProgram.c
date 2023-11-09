#include<stdio.h>

int main()
{
	int valuei = 200;
	char valuec = 'A';
	float valueb = 100.123;
	
	printf("Float: %f\n", valueb);
	printf("int value: %d\n", valuei);
	
	printf("char value: %c\n", valuec);
	
	return 0;
}

//Changed the header file to stdio.h instead of standardIO.h
//changed the integer to "int"
//formatting the valuei line properly to int valuei
//lowercasing the c in "Char"
//and putting single quotes instead of double
//removing the + 1 to get the desired output of 'A'
//float isnt attacted to a variable so adding a variable
//lowercasing the b in float
//changing it to printf instead of print
//chaning the value to match the format specifier for float
//replacing %c with proper format specifier for int %d
//replacing the 'value' with valuei since it the int value
//putting a ; in the int value line 
//replacing the "print_formatted" to printf
//replacing the "value" with the proper value which has a char in it
//replacing the colon with a semicolon at the end of the char value

