#include <stdio.h>
#include <math.h> 

int main() {
    int n; 
    scanf("%d", &n);
    double firstSum, secondSum; 
    firstProd = 1;
    secondSum = 0;
    int factor = 1;
    int i = 1;
    while (i <= n) {
        firstProd = firstProd* (1 + 1/(sqrt(i)));
        int factor = 1; 
        int k = 1;
        factor *= i;
        secondSum += (1 + 1/factor);
        i += 1;
    }
    printf("%f",firstSum * secondSum);



}