#include <stdio.h>


int main() {

    int numeros [10];
    int numMenor;
    int numMaior;
    int i;
    int soma = 0;
    float media;  
   
   
   for (i = 0; i < 10; i++) {
   printf("Digite o  %d valor: ", i + 1);
   scanf("%d", &numeros[i]);
   }
   
   numMaior = numeros[0];
   numMenor = numeros[0]; 
   
   for (i = 0; i < 10; i++) {
   soma = soma + numeros [i];
   
   if (numeros [i] > numMaior){
       numMaior = numeros[i];
   }
   if (numeros [i] < numMenor){
       numMenor = numeros[i];
   }
   }
   
   
   media = soma / 10.0;
   
   
   printf ("Número maior: %d\n", numMaior);
   printf("Número menor: %d\n", numMenor);
   printf("Média: %2f\n", media);
    return 0;
}