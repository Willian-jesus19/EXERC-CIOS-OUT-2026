#include <stdio.h>

int main ()
{
    
    int opcao;
    double cal1;
    double cal2;
    double resultado;
    
    do {
        printf("1. Somar dois números: \n");
        printf("2. Subtrair dois números: \n");
        printf("3. Multiplicar dois números: \n");
        printf("4. Sair:\n");
    
            printf("Escolha uma opção: ");
            scanf("%i", &opcao);    
        switch (opcao) {
            case 1: printf("Digite o primeiro número: ");
            scanf("%lf", &cal1);
            printf("Digite o segundo número: ");
            scanf("%lf", &cal2);
            resultado = cal1 + cal2;
            printf("Soma de dois números: %.1f\n", resultado);
            break;
            
        
            case 2: printf("Digite o primeiro número: ");
            scanf("%lf", &cal1);
            printf("Digite o segundo número: ");
            scanf("%lf", &cal2);
            resultado = cal1 - cal2;
            printf("Subtração de dois números: %.1f\n", resultado);
            break;
            
    
            case 3: printf("Digite o primeiro número: ");
            scanf("%lf", &cal1);
            printf("Digite o segundo número: ");
            scanf("%lf",&cal2);
            resultado = cal1 * cal2;
            printf("Multiplicação de dois números: %.1f\n ", resultado);
            break;
            
           case 4:
            printf("Sair...\n");
            break;

            default:
            printf("Opção inválida!\n");
            break;}
            
        }
        
    
    while (opcao !=4);
    
    return 0;
}