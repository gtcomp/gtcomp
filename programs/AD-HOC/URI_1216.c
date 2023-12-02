#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nome[60];
	double dist, disttot=0; 
	int pessoas = 0;
	float media;
	while(scanf(" %[^\n] %lf"), nome, &dist != EOF)
	{
		disttot += dist;
		pessoas++;
	}
	if(pessoas == 0) return 0;
	media = disttot/pessoas;
	printf("%.1f\n",media);
	return 0;
}
