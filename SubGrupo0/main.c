#include <stdio.h>
#include <stdlib.h>
#include "Comprimento.h"
#include "Velocidade.h"
#include "Massas.h"
#include "Tempo.h"
#include "Temperatura.h"
#include "Volume.h"

int main(){
    system("chcp 65001>nul");
    int opcao;
    do{
        printf("Escolha uma opcao:\n");
        printf("1 - Conversor de Comprimentos: \n");
        printf("2 - Conversor de Velocidades: \n");
        printf("3 - Conversor de Massas: \n");
        printf("4 - Conversor de Temperaturas: \n");
        printf("5 - Conversor de Tempo: \n");
        printf("6 - Conversor de Volumes: \n");
        printf("0 - Sair\n");
        printf("-->>>");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                menuConversorMedidas();
                break;
            case 2:
                funcaovelocidade();
                break;
            case 3:
                menuMassas();
                break;
            case 4:
                menuTemperatura();
                break;
            case 5:
                converterTempo();
                break;
            case 6:
                funcaoPrincipal();
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