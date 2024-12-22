#include <stdio.h>
#include <stdlib.h>
#include "Embarcatechsub0.h"

int main(){
    int opcao;
    do{
        printf("Escolha uma opcao:\n");
        printf("1 - Converter de Celsius para Kelvin\n");
        printf("2 - Converter de Kelvin para Celsius\n");
        printf("3 - Converter de Celsius para Fahrenheit\n");
        printf("4 - Converter de Fahrenheit para Celsius\n");
        printf("5 - Converter de Kelvin para Fahrenheit\n");
        printf("6 - Converter de Fahrenheit para Kelvin\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                temperaturaCelsiusKelvin();
                break;
            case 2:
                temperaturaKelvinCelsius();
                break;
            case 3:
                temperaturaCelsiusFahrenheit();
                break;
            case 4:
                temperaturaFahrenheitCelsius();
                break;
            case 5:
                temperaturaKelvinFahrenheit();
                break;
            case 6:
                temperaturaFahrenheitKelvin();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }while(opcao != 0);
    return 0;
}