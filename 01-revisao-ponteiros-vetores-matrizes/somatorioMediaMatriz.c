#include <stdio.h>
#include <stdlib.h>

float somatorio(int m, float v[][3]) {
	int i, j;
	float md = 0;
	for (i=0;i<m;i++)
		for(j=0;j<3;j++)
		md += v[i][j];
	return md;
}

int main(int argc, char *argv[]) {
	float m[4][3] = {{5.0,10.0,15.0},{20.0,25.0,30.0},{35.0,40.0,45.0},{50.0,55.0,60.0}};
	float s = somatorio(4,m);
	printf("Somatorio: %.1f\nMedia: %.1f\n", s, s/12);
	system("pause");
	return 0;
}

