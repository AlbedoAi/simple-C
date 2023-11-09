/*
*Date
* Description- Program that shows how the bitwise operators work
*/

#include <stdio.h>

//prints number into binary
void printBinary(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
	}
}

int main()
{
    int a, b;//stores input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);//Takes input

	printf("--------------------------------------------------\n");
    printf("NOT operation for %d: %d(dec) %X(hex) \n", a, !a, !a);//does the operation
    printf("\n");
    printBinary(a);
    printf("\nFlips the bits to their opposite, if on turn off.\n");
    printBinary(~a);
    printf("\n");

    printf("--------------------------------------------------\n");
    printf("NOT operation for %d: %d(dec) %X(hex) \n", b, !b, !b);
    printf("\n");
    printBinary(b);
    printf("\nFlips the bits to their opposite, if on turn off.\n");
    printBinary(~b);
    printf("\n");

	printf("--------------------------------------------------\n");
    printf("AND operation for %d & %d: %d(dec) %X(hex) \n", a, b, a & b, a & b);
    printf("\n");
    printBinary(a);
    printf("\n");
    printBinary(b);
    printf("\nIf both bits are turned on keep them on otherwise turn them off.\n");
    printBinary(a & b);
    printf("\n");

	printf("--------------------------------------------------\n");
    printf("OR operation for %d | %d: Dec: %d(dec) Hex: %X(hex) \n", a, b, a | b, a | b);
    printf("\n");
    printBinary(a);
    printf("\n");
    printBinary(b);
    printf("\nIf the bits are on leave them on.\n");
    printBinary(a | b);
    printf("\n");

	printf("--------------------------------------------------\n");
    printf("XOR operation for %d ^ %d: %d(dec) %X(hex) \n", a, b, a ^ b, a ^ b);
    printf("\n");
    printBinary(a);
    printf("\n");
    printBinary(b);
    printf("\nIf both bits are the same turn them off otherwise keep them the same.\n");
    printBinary(a ^ b);
    printf("\n");

    return 0;
}

