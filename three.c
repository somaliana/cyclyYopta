#include <stdio.h>
#include <math.h> 

int main() {
    double x;
    int k; 
    
    scanf("%lf %d", &x, &k);
    double rec= (x*x)/2;
    int i = 1;
    while (i <= k) {
        rec *= ((x*x)/2)/((k+1)*(k+1)*(2*k+1));
        i++;
    }
    printf("%lf", rec);


}