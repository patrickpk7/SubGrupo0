#include <stdio.h>

// Funçoes de conversão de medidas
void conversorMetroCentimetro() {
    float metro, centimetro;
    printf("Digite o valor em metros: ");
    scanf("%f", &metro);
    centimetro = metro * 100;
    printf("O valor em centimetros eh: %.2f\n", centimetro);
}

void conversorMetroMilimetro() {
    float metro, milimetro;
    printf("Digite o valor em metros: ");
    scanf("%f", &metro);
    milimetro = metro * 1000;
    printf("O valor em milimetros eh: %.2f\n", milimetro);
}

void conversorCentimetroMetro() {
    float metro, centimetro;
    printf("Digite o valor em centimetros: ");
    scanf("%f", &centimetro);
    metro = centimetro / 100;
    printf("O valor em metros eh: %.2f\n", metro);
}

void conversorCentimentroMilimetro() {
    float centimetro, milimetro;
    printf("Digite o valor em centimetros: ");
    scanf("%f", &centimetro);
    milimetro = centimetro * 10;
    printf("O valor em milimetros eh: %.2f\n", milimetro);
}

void conversorMilimetroMetro() {
    float metro, milimetro;
    printf("Digite o valor em milimetros: ");
    scanf("%f", &milimetro);
    metro = milimetro / 1000;
    printf("O valor em metros eh: %.2f\n", metro);
}

void conversorMilimetroCentimetro() {
    float centimetro, milimetro;
    printf("Digite o valor em milimetros: ");
    scanf("%f", &milimetro);
    centimetro = milimetro / 10;
    printf("O valor em centimetros eh: %.2f\n", centimetro);
}


// Menu de conversor de medidas
void menuConversorMedidas() {
    int menu, menuMetro, MenuCentimetro, menuMilimetro;
    printf("De qual a unidade de medida voce deseja converter?\n");
    printf("Digite 1 para converter de metros, digite 2 para converter de centimetros ou digite 3 para converter de milimetros: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("Digite 1 para converter para centimetros ou digite 2 para converter para milimetros: ");
        scanf("%d", &menuMetro);
        switch (menuMetro)
        {
        case 1:
            conversorMetroCentimetro();
            break;
        case 2:
            conversorMetroMilimetro();
            break;
        default:
            break;
        }
        break;
    case 2:
        printf("Digite 1 para converter para metros ou digite 2 para converter para milimetros: ");
        scanf("%d", &MenuCentimetro);
        switch (MenuCentimetro)
        {
        case 1:
            conversorCentimetroMetro();
            break;
        case 2:
            conversorCentimentroMilimetro();
            break;
        default:
            break;
        }
        break;
    case 3:
        printf("Digite 1 para converter para metros ou digite 2 para converter para centimetros: ");
        scanf("%d", &menuMilimetro);
        switch (menuMilimetro)
        {
        case 1:
            conversorMilimetroMetro();
            break;
        case 2:
            conversorMilimetroCentimetro();
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}