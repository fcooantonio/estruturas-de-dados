#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a, b, c;
	
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float tri, cir, tra, qua, ret;
    
    tri = (a * c) / 2;
    cir = c * c * 3.14159;
    tra = ((a + b) * c) / 2;
    qua = b * b;
    ret = a * b;
    
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", tri, cir, tra, qua, ret);
    
	system("pause");
	return 0;
}

