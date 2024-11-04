#include <stdio.h>
#include <stdlib.h>

float somatorio(int m, int n, float **v){
	int i, j; 
	float md = 0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			md += v[i][j];
	return md;
}

int main(int argc, char *argv[]) {
	int i, j, m, n;
	
	printf("Informe as linhas: ");
	scanf("%d", &m);
	printf("Informe as colunas: ");
	scanf("%d", &n);
	
	//Alocando memoria
	float **mat = (float**)malloc(m*sizeof(float*));
	for(i=0; i<m; i++)
		mat[i] = (float*)malloc(n*sizeof(float));
	if (mat == NULL) {
		printf("Memoria insuficiente!\n");
		exit(1);	
	}
	
	//Preenchendo a matriz
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			printf("Informe o valor da posicao [%d][%d]: ", i, j);
			scanf("%f", &mat[i][j]);
		}
		
	float s = somatorio(m, n, mat);
	printf("Somatorio = %.1f\nMedia = %.1f\n", s, s/(m* n));

	//Liberar memoria
	for(i=0; i<m; i++)
		free(mat[i]);
	free(mat);

	system("pause");
	return 0;
}

