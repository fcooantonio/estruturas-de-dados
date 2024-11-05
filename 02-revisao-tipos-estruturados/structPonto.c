#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
};

int main(int argc, char *argv[]) {
	struct ponto p;
	struct ponto *pp;
	pp = &p;
	printf("Digite as coordenadas do ponto (x,y): ");
	scanf("%f %f", &p.x, &p.y);
	pp->x = 10;
	pp->y = 10;
	printf("Ponto (%.2f,%.2f)\n", p.x, p.y);
	system("pause");
	return 0;
}

