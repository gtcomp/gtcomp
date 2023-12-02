#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, i, tamA, tamB, inc;
	char numA[1001], numB[1001];
	scanf("%d",&n);
	for(;n>0;n--)
	{
		inc = 0;
		scanf("%s %s", numA, numB);
		tamA=strlen(numA)-1;
		tamB=strlen(numB)-1;
		for(i=tamB;i>=0;i--)
		{
			if(numA[tamA]==numB[i]) inc++;
			tamA--;
		}
		if(inc==tamB+1) printf("encaixa\n");
		else printf("nao encaixa\n");
	}
}
