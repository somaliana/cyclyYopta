#include <stdio.h>
#include <math.h> 

int main() {
    int n; 
    scanf("%d", &n);
    double firstSum, secondSum; 
    firstSum = 1;
    secondSum = 1;

    int i = 1;
    while (i <= n) {
        firstSum = firstSum * (1 + 1/(sqrt(i)));
        int factor = 1; 
        int k = 1;
        while (k<=i) {
            factor = factor*k;
            k += 1;

        }
        secondSum = secondSum*(1 + 1/factor);
        i += 1;
    }
    printf("%f",firstSum * secondSum);



}