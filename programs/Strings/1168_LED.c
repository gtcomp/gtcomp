#include <stdio.h>
#include <stdlib.h>

//URI - 1168 - LED

int main ()
{
	char num[101];
	int n, i, j;
	long long int leds = 0;
	scanf("%d", &n);
	for (i=n;i>0;i--)
	{
		scanf("%s", &num);
		j = 0;
		leds = 0;
		while(num[j] != '\0')
		{
            if(num[j] == '1') leds += 2;
            if(num[j] == '2') leds += 5;
            if(num[j] == '3') leds += 5;
            if(num[j] == '4') leds += 4;
            if(num[j] == '5') leds += 5;
            if(num[j] == '6') leds += 6;
            if(num[j] == '7') leds += 3;
            if(num[j] == '8') leds += 7;
            if(num[j] == '9') leds += 6;
            if(num[j] == '0') leds += 6;
            j++;
		}
		printf("%lld leds\n", leds);
		printf("%c", ('a'+5));
	}
}
