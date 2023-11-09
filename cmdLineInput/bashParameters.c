#include<stdio.h>
#include<stdlib.h>
int displayfun(char, int, int, int);
int MinusFun(int, int);
int addFun(int, int);
int multiplyFun(int, int);
int divideFun(int, int);


int main(int argc, char *argv[])
{
	int num1, num2, result;
	char opr;
	
	//checking to see if arguments entered are more than specified
	if(argc!=4)
	{
		printf("Invalid program parameters. Please execute the program using the following format: './a.out <num1> <operator> <num2>' \nOperators can be: x, /, +, -\n");
		return 0;
	}
	
	//converts from string to integer to get the numeric values entered in the cmdline
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	
	//gets the opr need to use
	opr=argv[2][0];
	
	//using switches to switch between the differnt opperators to perform the correct math
	switch(opr)
	{
		case '+':
			result = addFun(num1, num2);//gives the number to the function and it returns the value which is stored in result
			break;
		case '-':
			result = MinusFun(num1, num2);
			break;
		case 'x':
			result = multiplyFun(num1, num2);
			break;
		case '/':
			result = divideFun(num1, num2);
			break;
		default:
			result=0;
			break;
	}
	
	//the displayFun displays the results
	displayfun(opr, num1, num2, result);
	return 0;
}
int addFun(int num1, int num2)
{
	return num1 + num2;
}

int MinusFun(int num1, int num2)
{
	return num1 - num2;
}

int divideFun(int num1, int num2)
{

	return num1 / num2;
}

int multiplyFun(int num1, int num2)
{
	return num1 * num2;
}

int displayfun(char opr, int num1, int num2, int result)
{
	if(opr=='+' || opr=='-' || opr=='x' || opr=='/')
		printf("Result: %d %c %d = %d\n",num1,opr,num2,result);
	else
		printf("Invalid Operator, %c\n", opr);
		
}


