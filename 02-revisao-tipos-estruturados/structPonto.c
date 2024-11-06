#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
};

void captura_ponto(struct ponto *pp){
	printf("Digite as coordenadas do ponto (x,y):\n");
	scanf("%f %f", &pp->x, &pp->y);
}

void imprime_ponto(struct ponto *pp){
	printf("Ponto (%.1f,%.1f)\n", pp->x, pp->y);
}

int main(int argc, char *argv[]) {
	struct ponto p;
	captura_ponto(&p);
	imprime_ponto(&p);
	system("pause");
	return 0;
}

