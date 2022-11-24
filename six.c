#include <stdio.h>
#include <math.h> 

int main() {
    int n;
    double x,e;
    scanf("%d %lf %lf", &n, &x, &e);
    double s0 = 0;
    double s1 = 0.5;
    int i = 2; 
    
    do {
        if (i > n) {
            printf("Whoops");
            break;

        }
        int copyThat = s1;

        s1 = x*((s0+s1)/2) + s0*(x*x);
        s0 = copyThat;
        i++;
    }
    while (fabs(s0-s1) > e);

    printf("%lf",s1);

}