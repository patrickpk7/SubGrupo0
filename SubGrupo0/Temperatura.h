


void temperaturaCelsiusKelvin(){
    float celsius, kelvin;
    printf("Digite a temperatura em celsius.\n");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("A temperatura em kelvin fica %.2f kelvins!\n", kelvin);
}
void temperaturaKelvinCelsius(){
float celsius, kelvin;
    printf("Digite a temperatura em kelvins.\n");
    scanf("%f", &kelvin);
    celsius = kelvin - 273.15;
    printf("A temperatura em celsius fica %.2f celsius!\n", celsius);
}
void temperaturaCelsiusFahrenheit(){
    float celsius, fahrenheit;
    printf("Digite a temperatura em celsius.\n");
    scanf("%f", &celsius);
    fahrenheit = celsius * 1.8 + 32;
    printf("A temperatura em fahrenheit fica %.2f fahrenheits!\n", fahrenheit);
}
void temperaturaFahrenheitCelsius(){
     float celsius, fahrenheit;
     printf("Digite a temperatura em fahrenheit.\n");
     scanf("%f", &fahrenheit);
     celsius = (fahrenheit - 32) / 1.8;
     printf("A temperatura em celsius fica %.2f celsius!\n", celsius);
}
void temperaturaKelvinFahrenheit(){
    float kelvin, fahrenheit;
    printf("Digite a temperatura em kelvin.\n");
    scanf("%f", &kelvin);
    fahrenheit = (kelvin - 273,15) * 1.8 + 32;  
    printf("A temperatura em fahrenheit fica %.2f fahrenheits!\n", fahrenheit);
}
void temperaturaFahrenheitKelvin(){
    float kelvin, fahrenheit;
    printf("Digite a temperatura em fahrenheit.\n");
    scanf("%f", &fahrenheit);
    kelvin = (fahrenheit - 32) / 1.8 +273.15;
    printf("A temperatura em kelvin fica %.2f kelvins!\n", kelvin);

}


