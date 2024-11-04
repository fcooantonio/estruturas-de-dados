#include <stdio.h>
#include <stdlib.h>

float somatorio(int tamanho, float vetor[]) {
	int i;
	float s = 0;
	for(i=0;i<tamanho;i++)
		s += vetor[i];
	return (s);
}

int main(int argc, char *argv[]) {
	
	float v[] = {2, 2, 5};
	float s = somatorio(3, v);
	printf("Somatorio = %.1f\nMedia = %.1f\n", s, s/3);	
	system("pause");
	return 0;
}

