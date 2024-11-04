#include <stdio.h>
#include <stdlib.h>

void soma (int x, int y, int *soma) {
	*soma = x+y;
}

void diferenca (int x, int y, int *diferenca) {
	*diferenca = x-y;
}

void produto (int x, int y, int *produto) {
	*produto = x*y;
}

void divisao (int x, int y, int *divisao) {
	*divisao = x/y;
}

int main(int argc, char *argv[]) {
	int s, d, p, div;
	
	soma(4,2,&s);
	diferenca(4,2,&d);
	produto(4,2,&p);
	divisao(4,2,&div);
	
	printf("soma = %d\ndiferenca = %d\nproduto = %d\ndivisao = %d\n", s, d, p, div);
	
	system("pause");
	return 0;
}

