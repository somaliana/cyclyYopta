#include <stdio.h>
#include <math.h> 

int main() {
    int n;
    double x;
    scanf("%d %lf", &n, &x);
    double s0 = 0;
    double s1 = 0.5;
    int i = 2; 
    
    while (i<n) {
        int copyThat = s1;

        s1 = x*((s0+s1)/2) + s0*(x*x);
        s0 = copyThat;
        i++;
    }
    printf("%lf",s1);

}