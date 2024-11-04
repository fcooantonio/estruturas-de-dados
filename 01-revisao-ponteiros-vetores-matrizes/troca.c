#include <stdio.h>
#include <stdlib.h>

void troca (int *px, int *py) {
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main(int argc, char *argv[]) {
	
	int a = 5, b = 8;
	troca(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
	system("pause");
	return 0;
}

