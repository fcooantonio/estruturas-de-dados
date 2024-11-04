# Repositório de exercícios da disciplina de Estruturas de Dados

**Dicas para a disciplina:**
- Pratique os códigos apresentados em aula;
  - A IDE recomendada a ser usada na disciplina é o [Dev-C++](https://www.bloodshed.net/). Mas você pode optar pela IDE que mais lhe agrade. Deixo outras duas como indicações a [Visual Studio Code](https://code.visualstudio.com/) ou a [CLion](https://www.jetbrains.com/cpp/) da JetBrains, ambas devem ser configuradas para funcionar corretamente, há tutoriais na internet para ajudar com isso.
  - O [Beecrowd](https://judge.beecrowd.com/pt/login) é um site interessante para manter a lógica de programação em dia, podendo, inclusive, ser usado para qualquer linguagem de programação!
- Pratique a escrita de código, a sintaxe da linguagem C, com papel e lápis (ou caneta), pois ela é a linguagem a ser usada nas ***provas escritas*** da disciplina.
- Faça provas antigas para ter noção de como os conteúdos serão cobrados.

## Revisão de Ponteiros, Vetores e Matrizes

- Exemplo: uma calculadora simples com funções com passagem por referência
``` c
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
```

