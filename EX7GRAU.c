#include <stdio.h>


float celciusparaFahrenheit (float grauCelcius){
 
 float Fahrenheit = (grauCelcius * 1.8) + 32;
 return Fahrenheit;   
}


int main () {
    
    float grauCelcius;
    float Fahrenheit;

    printf("Digite a temperatura em graus: ");
    scanf("%f", &grauCelcius);
    
   Fahrenheit = celciusparaFahrenheit(grauCelcius);
    printf("A temperatura convertida em Fahrenheit é: %2f ", Fahrenheit);    
    return 0;
}