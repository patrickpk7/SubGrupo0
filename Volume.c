#include <stdio.h>

// Protótipo das funções
void convert_volume(float volume, char from_unit, char to_unit);

int main() {
    
    system("chcp 65001>nul");
    
    float volume;
    char from_unit, to_unit;

    printf("=== Conversor de Unidades de Volume ===\n");
    printf("Unidades disponíveis:\n");
    printf("L - Litros\n");
    printf("M - Mililitros\n");
    printf("C - Metros cúbicos\n");

    // Entrada do volume e das unidades
    printf("\nDigite o volume a ser convertido: ");
    scanf("%f", &volume);

    printf("Digite a unidade de origem (L/M/C): ");
    scanf(" %c", &from_unit);

    printf("Digite a unidade de destino (L/M/C): ");
    scanf(" %c", &to_unit);

    // Chamada da função de conversão
    convert_volume(volume, from_unit, to_unit);

    return 0;
}
/ Função de conversão de volume
void convert_volume(float volume, char from_unit, char to_unit) {
    float converted_volume = 0;

    // Conversão para litros como unidade intermediária
    switch (from_unit) {
        case 'L': // Litros
            converted_volume = volume;
            break;
        case 'M': // Mililitros
            converted_volume = volume / 1000.0;
            break;
        case 'C': // Metros cúbicos
            converted_volume = volume * 1000.0;
            break;
        default:
            printf("Unidade de origem inválida.\n");
            return;
    }
