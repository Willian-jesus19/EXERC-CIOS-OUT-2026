#include <stdio.h>

int main ()
{
    
    int resultado;
    int tabuada;
    int i;
    
    printf("Digite um número para exibir a tabuada:\n");
    scanf("%i", &tabuada);

    
    for ( i = 1 ; i <=10; i++) { 
    resultado = tabuada * i;
    printf("Resultado: %i x %i = %i \n", tabuada, i, resultado);
}
    return 0;
}