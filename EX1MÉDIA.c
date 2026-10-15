#include <stdio.h>


int main ()
{
    
    double media, nota1, nota2, nota3;
    
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;

    
    if (media >= 7.0) {
       printf("Aprovado!"); 
    }
    
    else if (media >= 5.0 && media  <= 6.9) {
        printf("Recuperação");
    }
    
    else {
        printf("Reprovado!\n");
        
    }
    
    return 0;
}