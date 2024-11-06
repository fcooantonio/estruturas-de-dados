#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto{
	float x;
	float y;
} Ponto;

typedef struct circulo{
	Ponto p;
	float r;
} Circulo;

void capturaPonto(Ponto *pp){
	printf("Digite as coordenadas do ponto (x,y):\n");
	scanf("%f %f", &pp->x, &pp->y);
}

void capturaCirculo(Circulo *pc){
	capturaPonto(&pc->p);
	printf("Informe o raio do circulo: ");
	scanf("%f", &pc->r);
}

float distanciaPontos(Ponto *p1, Ponto *p2){
	return sqrt((p1->x - p2->x)*(p1->x - p2->x)+(p1->y - p2->y)*(p1->y - p2->y));
}

int dentroCirculo(Circulo *c, Ponto *p) {
	float d = distanciaPontos(&c->p, p);
	return (d > c->r);
}

int main(int argc, char *argv[]) {
	Ponto p;
	Circulo c;
	capturaCirculo(&c);
	capturaPonto(&p);
	if(dentroCirculo(&c,&p))
		printf("Fora do circulo!\n");
	else
		printf("Dentro do circulo!\n");
	system("pause");
	return 0;
}
    
