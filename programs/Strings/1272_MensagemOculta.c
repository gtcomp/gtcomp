#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int rep, i, j, k, tam;
	char mens[52], crip[52];
	scanf("%d", &rep);
	getchar();
	for(i=rep; i>0; i--)
	{
		fgets(mens,52,stdin);
		tam = strlen(mens)-1;
		for(j=0,k=0;j<tam;j++)
		{
			if(mens[j]!=' '&&(!j||mens[j-1]==' '))
			{
				crip[k]=mens[j];
				k++;
			}
				
		}
		crip[k]='\0';
		puts(crip);
	}
	return 0;	
}
