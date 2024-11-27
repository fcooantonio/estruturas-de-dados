#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
	char nome[80];
	float ira;
} Aluno;
#define MAX 2
#define SEMALUNO -1

void inicializa(int n, Aluno alunos[]);
void atualiza(int n, Aluno alunos[], int i);
void imprime(int n, Aluno alunos[], int i);
void imprime_todos(int n, Aluno alunos[]);
void exclui(int n, Aluno alunos[], int i);

void inicializa(int n, Aluno alunos[]) {
	int i;
	for(i=0;i<n;i++)
		alunos[i].ira = SEMALUNO;
}

void imprime(int n, Aluno alunos[], int i){
	if(i<0||i>=n){
		printf("Indice fora do limite do vetor!!!\n");
		exit(1);
	}
	if(alunos[i].ira != SEMALUNO){
		printf("Nome: %s\n", alunos[i].nome);
		printf("Ira: %.2f\n", alunos[i].ira);
	}
}

void imprime_todos(int n, Aluno alunos[]){
	int i;
	printf("Listagem de Alunos\n");
	for(i=0;i<n;i++)
		imprime(n,alunos,i);
}

void atualiza(int n, Aluno alunos[], int i){
	float ira;
	if(i<0||i>=n){
		printf("Indice fora do limite do vetor!!!\n");
		exit(1);
	}
	printf("Entre com o nome do aluno\n");
	scanf(" %[^\n]",alunos[i].nome);
	while(1){
		printf("Entre com o IRA do aluno\n");
		scanf(" %f", &ira);
		if(ira<0||ira>100)
			printf("IRA pertence ao intervalo [0.0, 100.0]\n");
		else
			break;
	}
	alunos[i].ira = ira;
}

int mainMAX(void) {
	Aluno alunos[MAX];
	int i;
	inicializa(MAX,alunos);
	for(i=0;i<MAX;i++)
		atualiza(MAX,alunos,i);
	imprime_todos(MAX,alunos);
 
	system("pause");
	return 0;
}

int main(void) {
	
	Aluno *alunos;
	int n,i;
	printf("Entre com o numero de alunos:\n");
	scanf("%d",&n);
	alunos = (Aluno*)malloc(n*sizeof(Aluno));
	if(alunos == NULL){
		printf("Memoria Insuficiente!!!\n");
		exit(1);
	}
	inicializa(n,alunos);
	for(i=0;i<n;i++)
		atualiza(n,alunos,i);
	imprime_todos(n,alunos);
	free(alunos);
	system("pause");
	return 0;
}
