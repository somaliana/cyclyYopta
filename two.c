#include <stdio.h>
#include <math.h> 

int main() {
    int n; 
    scanf("%d", &n);
    int i = 0;
    while (n>0) {
        n = n/10;
        i += 1;
    }
    printf("%d", i);



}