//URI 1103
#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int H1, M1, H2, M2, t1, t2, tts;
	while(1)
	{
		tts = 0;
		scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
		if(H1==0 && M1==0 && H2==0 && M2==0)
		{
			break;	
		}
		t1 = H1*60 + M1;
		t2 = H2*60 + M2;
		if(t1>t2) tts = 1440+t2-t1;
		else tts = t2 - t1; 
		printf("%d\n", tts);
	}
}
