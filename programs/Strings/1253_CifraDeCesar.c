#include <stdio.h>
#include <stdlib.h>

//URI - 1253 - LED

int main ()
{
	int n, desl, i, j;
	char cod[51];
	scanf("%d", &n);
	for (i=n; i>0; i--)
	{
		scanf("%s", &cod);
		scanf("%d", &desl);
		for (j=0;j<51;j++)
		{
			if(cod[j]=='\0') break;
			if((cod[j] - desl) < 65) printf("%c", (cod[j]-desl) + 26);
			else printf("%c", (cod[j]-desl));
		}
		printf("\n");
	}
}
