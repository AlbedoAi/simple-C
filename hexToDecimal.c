#include<stdio.h>

int main(void)
{

    int hexval1, hexval2, hexval3, hexval4;
    int cube16 = 4096;
	int result;
	
	printf("Enter fourdigit Hex one by one:\n");
	scanf("%x%x%x%x", &hexval1, &hexval2, &hexval3, &hexval4);

    hexval1 *= cube16;
    cube16 >>= 4;	
	
   	hexval2 *= cube16;
    cube16 >>= 4;
	
   	hexval3 *= cube16;
    cube16 >>= 4;
	
    hexval4 *= cube16;
    result = hexval1 + hexval2 + hexval3 + hexval4;
    
    printf("%i is the decimal eqivalent\n", result);


        

}
