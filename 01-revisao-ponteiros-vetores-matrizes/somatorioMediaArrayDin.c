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
	int n, i;
	float *v, s;
	printf("Tamanho do vetor:\n");
	scanf("%d", &n);
	v = (float*) malloc(n*sizeof(float));
	if (v == NULL) {
		printf("Memoria insuficiente!\n");
		exit(1);	
	}
	for(i = 0; i<n; i++)
		scanf("%f", &v[i]);
	s = somatorio(n,v);
	printf("Somatorio = %.1f\nMedia = %.1f\n", s, s/n);
		
	free(v);
	system("pause");
	return 0;
}

