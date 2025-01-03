#include <stdio.h>
#ifndef CONVERSOR_H // Evita duplicação ao incluir o arquivo
#define CONVERSOR_H

// Declaração das funções
double joules_para_kwh(double energia);
double calorias_para_joules(double energia);
double calorias_para_kwh(double energia);

#endif


// Função que converte joules para kWh
double joules_para_kwh(double energia) {
    // Peguei isso na internet, parece que é só multiplicar por esse número
    return energia * 2.7778e-7;
}

// Função que converte calorias para joules
double calorias_para_joules(double energia) {
    // 1 caloria vira isso em joules, fiz umas contas aqui e parece certo
    return energia * 4.184;
}

// Função que converte calorias para kWh
double calorias_para_kwh(double energia) {
    // Multiplicação de novo, achei esse número num PDF, parece confiável
    return energia * 1.1622e-6;
}

void menuEnergia() {
    int opcao; // Vai guardar o que o usuário escolher
    double energia, resultado; // Variáveis para entrada e resultado

    // Menu bonito
    printf("=== Conversor de Energia ===\n");
    printf("Escolha o tipo de conversão:\n");
    printf("1. Joules para kWh\n"); // Opção 1
    printf("2. Calorias para Joules\n"); // Opção 2
    printf("3. Calorias para kWh\n"); // Opção 3
    printf("Digite sua escolha (1-3): ");
    scanf("%d", &opcao); // Aqui lê o que o usuário escolheu

    // Verifica se a pessoa escolheu algo válido
    if (opcao < 1 || opcao > 3) {
        // Se digitou errado, já encerra o programa
        printf("Opção inválida! Tente de novo mais tarde.\n");
        
    }

    // Pede o valor da energia para converter
    printf("Digite o valor da energia (sem letras!): ");
    scanf("%lf", &energia); // Lê um número (double)

    // Faz a conversão baseada na escolha
    switch (opcao) {
        case 1:
            resultado = joules_para_kwh(energia); // Chama a função para joules -> kWh
            printf("%.2lf Joules viraram %.6lf kWh. Tá aí.\n", energia, resultado);
            break;
        case 2:
            resultado = calorias_para_joules(energia); // Chama a função para calorias -> Joules
            printf("%.2lf Calorias viraram %.2lf Joules. Espero que esteja certo!\n", energia, resultado);
            break;
        case 3:
            resultado = calorias_para_kwh(energia); // Chama a função para calorias -> kWh
            printf("%.2lf Calorias viraram %.6lf kWh. Boa sorte com isso.\n", energia, resultado);
            break;
        default:
            // Essa parte nunca deve acontecer, mas coloquei só por segurança
            printf("Erro bizarro, não deveria chegar aqui.\n");
    }

    // Mensagem final antes de sair
    printf("Valeu por usar o conversor! Programa encerrado.\n");
   
printf("Pressione Enter para sair...");
getchar(); // Para capturar o "Enter"
getchar(); // Para consumir o buffer do scanf
    
}
