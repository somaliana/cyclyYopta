#include <stdio.h>
#include <math.h> 

int main() { 
    int n;
    double x;
    scanf("%d %lf",&n, &x); 
    int i = 1;
    double result = 1;
    while (i <= n) {
        int power = 1;

        for(int k = 1; k <=i; k++) {
            power *= x;
        }
        result *= 1 - (power/(i*i)); 
        i++;
    }
    printf("%lf", result);
    
}
