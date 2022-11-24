#include <stdio.h>
#include <math.h> 

int main() {
    double x,e;
    int k; 
    
    scanf("%lf %lf %d", &x,&e,&k);
    double rec= (x*x)/2;
    double previous;
    int i = 0;
    do {
        if (i>k) {
            printf("Yoops");
            break;
        }
        previous = rec;
        rec *= ((x*x)/2)/((k+1)*(k+1)*(2*k+1));
        i++;
    }
    while (fabs(rec-previous) > e);
    printf("%lf", rec);


}