#include <stdio.h>

int ehPrimo(int n) {
for (int i = 2; i < n; i ++){
    if (n % i == 0)
    return 0;
    
    }
    
return 1;
}


int main () {
    
    int n;
    
    printf("digite um valor inteiro: ");
    scanf("%d", &n);
    
        if (ehPrimo (n) == 1) {
        printf("O número é primo: %d", n);
        }   
        else { printf("O número não é primo: %d", n); }
    
    return 0;
    
}