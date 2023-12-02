#include <stdio.h>

int main()
{
    int N, A, B, C, D, E, i, count;

    while(scanf("%d", &N) != 0){
        if(N == 0){
            break;
        }
        for(i = 0; i < N; i++){
            scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
            count = 0;

            if(A <= 127){
                count++;
                A = 1;
            }
            else{
                A = 0;
            }
            if(B <= 127){
                count++;
                B = 1;
            }
            else{
                B = 0;
            }
            if(C <= 127){
                count++;
                C = 1;
            }
            else{
                C = 0;
            }
            if(D <= 127){
                count++;
                D = 1;
            }
            else{
                D = 0;
            }
            if(E <= 127){
                count++;
                E = 1;
            }
            else{
                E = 0;
            }

            if(count == 1){
                if(A == 1){
                    printf("A\n");
                }
                if(B == 1){
                    printf("B\n");
                }
                if(C == 1){
                    printf("C\n");
                }
                if(D == 1){
                    printf("D\n");
                }
                if(E == 1){
                    printf("E\n");
                }
            }
            else{
                printf("*\n");
            }
        }
    }

    return 0;
}
