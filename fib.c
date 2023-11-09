#include<stdio.h> //This header files allows the user to perform for I/O operations
#include<stdlib.h> //Allows for conversion, memory allocation and algorithims
#include<unistd.h> //Header file allows for defines miscellaneous symbolic constants and types, and declares miscellaneous functions
#define MAX 10

//Defining variables
int i=12345;
double y=1.23456;

//Function to display said pariables
void display_variables()
{
    //Setting another var
    double y=4.352;
    //Printing all the variables
    printf("i=%d, y=%f\n", i, y);
}

//Functions which gets passed a value of n
int fib(int n)
{
    //If/else statement checking what number was passed and if its the same do the associated code
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        //if all above fails to match return the following.
        return(fib(n-1) + fib(n-2));
    }
}

// The main function
int main()
{
    //printing the variable
    printf("i=%d, y=%f\n", i, y);
    //Calling the function from above to execute its code
    display_variables();
    //declaring variables and setting them to 0
    int c, i =0;
    //creating a for loop which keeps running untill it reaches the MAX
    for(c = 0; c <= MAX; c++)
    {
        //prints the number while passing it the value of i
        printf("%d\n", fib(i));
        i++;//Incrementing the i value
    }
    return 0;//return 0
}