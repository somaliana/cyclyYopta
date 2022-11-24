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
    int i = 0;
    int copyN2 = n;
    while (copyN2>0) {
        copyN2 = copyN2/10;
        i += 1;
    }
    int desiredDigit;
    int j = 1;
    while(i+1-k>=j) {
        desiredDigit = n%10;
        n = n/10;
        j++;
    }
    
    
    printf("%lf", pow(firstDigit,desiredDigit));




}