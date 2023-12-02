#include <stdio.h>

int mdc(int a, int b)
    {
        int resto;

        while (b!=0)
        {
            resto = a%b;
            a = b;
            b = resto;
        }

        return a;
    }

int main()
    {
        int cs, r, v, res, i = 0;

        scanf("%d", &cs);
        while (i<cs)
        {
            scanf("%d %d", &r, &v);
            i++;
            res = mdc(r, v);
            printf("%d\n", res);
        }

        return 0;
    }
