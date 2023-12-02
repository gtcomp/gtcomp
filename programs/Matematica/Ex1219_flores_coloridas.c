#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535897

int main(){

    double a, b, c, p;
    double A_tri, A_C, A_c;
    double R, r;


    
    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF){

        R = ((a * b * c) / sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c)));
        p = (a+b+c)/2;
        A_tri = sqrt(p*(p-a)*(p-b)*(p-c));
        r = A_tri / p;
        A_c = (r*r*PI);
        A_C = (R*R*PI)-A_tri;
        A_tri = A_tri - A_c;


        printf("%.4lf %.4lf %.4lf\n", A_C, A_tri, A_c);
    }






    return 0;
}