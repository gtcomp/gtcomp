#include <stdio.h>
#include <stdlib.h>

int whatSurvivor(int ppl, int jmp, int inicio)
{
	if (ppl==1) return 1;
	
	int novoInicio, survivor;
	novoInicio = (inicio + jmp - 2) % ppl+1;
	printf("%d", novoInicio);
}

int main ()
{
	int cas, ppl, jmp, i, survivor; //Variáveis: número de casos, pessoas, pulos, "i" para loop, sobrevivente final
	scanf("%d", &cas);
	for(i=0; i<cas; i++)
	{
		scanf("%d %d", &ppl, &jmp);
		whatSurvivor(ppl,jmp,1);
	} 
}
