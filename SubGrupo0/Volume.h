#include <stdio.h>

// Protótipo das funções
void convert_volume(float volume, int from_unit, int to_unit);

void funcaoVolume() {
    float volume;
    int from_unit, to_unit;

    printf("=== Conversor de Unidades de Volume ===\n");
    printf("Unidades disponíveis:\n");
    printf("1 - Litros\n");
    printf("2 - Mililitros\n");
    printf("3 - Metros cúbicos\n");

    // Entrada do volume e das unidades
    printf("\nDigite o valor a ser convertido: ");
    scanf("%f", &volume);

    printf("Digite a unidade de origem (1 para Litros, 2 para Mililitros, 3 para Metros cúbicos):\n");
    scanf("%d", &from_unit);

    printf("Digite a unidade de destino (1 para Litros, 2 para Mililitros, 3 para Metros cúbicos): ");
    scanf("%d", &to_unit);

    // Chamada da função de conversão
    convert_volume(volume, from_unit, to_unit);
}

// Função de conversão de volume
void convert_volume(float volume, int from_unit, int to_unit) {
    float converted_volume = 0;

    // Conversão para litros como unidade intermediária
    switch (from_unit) {
        case 1: // Litros
            converted_volume = volume;
            break;
        case 2: // Mililitros
            converted_volume = volume / 1000.0;
            break;
        case 3: // Metros cúbicos
            converted_volume = volume * 1000.0;
            break;
        default:
            printf("Unidade de origem inválida.\n");
            return;
    }

    // Conversão de litros para a unidade de destino
    switch (to_unit) {
        case 1: // Litros
            break;
        case 2: // Mililitros
            converted_volume *= 1000.0;
            break;
        case 3: // Metros cúbicos
            converted_volume /= 1000.0;
            break;
        default:
            printf("Unidade de destino inválida.\n");
            return;
    }

    // Exibir o resultado
    printf("\nResultado: %.3f ", converted_volume);

    // Exibir a unidade de destino
    switch (to_unit) {
        case 1:
            printf("Litros\n");
            break;
        case 2:
            printf("Mililitros\n");
            break;
        case 3:
            printf("Metros cúbicos\n");
            break;
    }
}































// #include <stdio.h>

// // Protótipo das funções
// void convert_volume(float volume, char from_unit, char to_unit);

// void funcaoVolume() {
    
    
    
//     float volume;
//     char from_unit, to_unit;

//     printf("=== Conversor de Unidades de Volume ===\n");
//     printf("Unidades disponíveis:\n");
//     printf("L - Litros\n");
//     printf("M - Mililitros\n");
//     printf("C - Metros cúbicos\n");

//     // Entrada do volume e das unidades
//     printf("\nDigite o valor a ser convertido: ");
//     scanf("%f", &volume);

//     printf("Digite a unidade de origem (L/M/C):\n");
//     scanf(" %c", &from_unit);

//     printf("Digite a unidade de destino (L/M/C): ");
//     scanf(" %c", &to_unit);

//     // Chamada da função de conversão
//     convert_volume(volume, from_unit, to_unit);

//     //return 0;
// }
// // Função de conversão de volume
// void convert_volume(float volume, char from_unit, char to_unit) {
//     float converted_volume = 0;

//     // Conversão para litros como unidade intermediária
//     switch (from_unit) {
//         case 'L': // Litros
//             converted_volume = volume;
//             break;
//         case 'M': // Mililitros
//             converted_volume = volume / 1000.0;
//             break;
//         case 'C': // Metros cúbicos
//             converted_volume = volume * 1000.0;
//             break;
//         default:
//             printf("Unidade de origem inválida.\n");
//             return;
//     }
//  // Conversão de litros para a unidade de destino
//     switch (to_unit) {
//         case 'L': // Litros
//             break;
//         case 'M': // Mililitros
//             converted_volume *= 1000.0;
//             break;
//         case 'C': // Metros cúbicos
//             converted_volume /= 1000.0;
//             break;
//         default:
//             printf("Unidade de destino inválida.\n");
//             return;
//     }
//     // Exibir o resultado
//     printf("\nResultado: %.3f %c\n", converted_volume, to_unit);
// }
