#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main ()
{
	int volGas, raio, numBal;
	float volBal;
	scanf("%d %d", &raio, &volGas);
	raio = raio*raio*raio;
	volBal = (4.0/3.0)*(PI*raio);
	numBal = volGas/volBal;
	printf("%d\n", numBal); 
}
