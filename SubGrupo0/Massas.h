#include <stdio.h>

void conversorQuilogramaGrama(){
    float quilograma, grama;
    printf("Digite o valor em quilograma: ");
    scanf("%f", &quilograma);
    grama = quilograma * 1000;
    printf("O valor em grama eh: %.2f\n", grama);
}

void conversorGramaQuilograma(){
    float grama, quilograma;
    printf("Digite o valor em grama: ");
    scanf("%f", &grama);
    quilograma = grama / 1000;
    printf("O valor eh: %.2f\n", quilograma);
}

void conversorQuilogramaTonelada(){
    float quilograma, tonelada;
    printf("Digite o valor em quilograma: ");
    scanf("%f", &quilograma);
    tonelada = quilograma / 1000;
    printf("O valor eh: %.2f\n", tonelada);
}

void conversorToneladaQuilograma(){
    float tonelada, quilograma;
    printf("Digite o valor em tonelada: ");
    scanf("%f", &tonelada);
    quilograma = tonelada * 1000;
    printf("O valor eh: %.2f\n", quilograma);
}

void conversorGramaTonelada(){
    float grama, tonelada;
    printf("Digite o valor em grama: ");
    scanf("%f", &grama);
    tonelada = grama / 1000000;
    printf("O valor eh: %.2f\n", tonelada);
}

void conversorToneladaGrama(){
    float tonelada, grama;
    printf("Digite o valor em tonelada: ");
    scanf("%f", &tonelada);
    grama = tonelada * 1000000;
    printf("O valor eh: %.2f\n", grama);
}

void menuMassas(){
    int menu;
    printf("Digite 1 para converter de kg para g ou 2 para converter de g para kg, digite 3 para converter kg para t ou 4 de t para kg, digite 5 para converter de g para t ou 6 de t para g: ");
    scanf("%d", &menu);
    switch(menu)
    {
        case 1:
            conversorQuilogramaGrama();
            break;
        case 2:
            conversorGramaQuilograma();
            break;
        case 3:
            conversorQuilogramaTonelada();
            break;
        case 4:
            conversorToneladaQuilograma();
            break;
        case 5:
            conversorGramaTonelada();
            break;
        case 6:
            conversorToneladaGrama();
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }
    
}