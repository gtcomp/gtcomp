#include <stdio.h>
#include <stdlib.h>
//URI 1170 - Blobs
int main()
{
	int test, i, dias=0;
	float com;
	
	scanf("%d", &test);
	for(i=test; i>0; i--)
	{
		dias = 0;
		scanf("%f", &com);
		while(com>=1.0)
		{
			com = com/2.0;
			dias++;
		}
		printf("%d dias\n", dias);
	}
	
	return 0;
}
