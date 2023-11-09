#include<stdio.h>

int main(void)
{
	//intializing all vars
	short int aval = 100;
	int bval = 100;
	float cval = 100;
	double dval = 100;
	char eval = 100;
	unsigned char fval = 100;
	
	//printing their specified details from memory and such
	printf("[aval]> Addr: %p, Value: %i or hex: 0x%x, sizeof: %li\n", &aval, aval, aval, sizeof(aval));
	printf("[bval]> Addr: %p, Value: %i or hex: 0x%x, sizeof: %li\n", &bval, bval, bval, sizeof(bval));
	printf("[cval]> Addr: %p, Value: %f or hex: %a, sizeof: %li\n", &cval, cval, cval, sizeof(cval));
	printf("[dval]> Addr: %p, Value: %f or hex: %a, sizeof: %li\n", &dval, dval, dval, sizeof(dval));
	printf("[eval]> Addr: %p, Value: %c or hex: 0x%x, sizeof: %li\n", &eval, eval, eval, sizeof(eval));
	printf("[fval]> Addr: %p, Value: %c or hex: 0x%x, sizeof: %li\n", &fval, fval, fval, sizeof(fval));
}
