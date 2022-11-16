#include <stdio.h>
#include <math.h> 

int main() { 
    int n,k; 
    scanf("%d %d", &n,&k);
    int firstDigit;
    int copyN = n;
    while (copyN>0) {
        firstDigit = copyN%10;
        copyN /= 10;

    }
    int desiredDigit;
    int i = 1;
    while (i <= k) {
        desiredDigit = n%10;
        n /= 10;
        i++;
    }
    printf("%lf", pow(firstDigit,desiredDigit));




}