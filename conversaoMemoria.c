void conversaoMemoria() //Módulo de conversão de memória
{
    setlocale(LC_ALL, "Portuguese");
    
    int pergunta;
    double pergunta2;
    
    void bitsBits() //Módulo de conversão de bits para bits
    {
        printf("\nQuantos bits você deseja converter? ");
        scanf("%lf", &pergunta2);
        if(pergunta2 <= 999)
        {
            printf("%0.1f Bits = %0.1f Bits", pergunta2, pergunta2);
        }else if(pergunta2 <= 999999)
        {
            printf("%0.2f Kilobits = %0.0f Bits", pergunta2/1000, pergunta2/1000*1000);
        }else if(pergunta2 <= 999999999)
        {
            printf("%0.1f Megabits = %0.0f Kilobits", pergunta2/1000000, pergunta2*1000);
        }else if(pergunta2 <= 999999999999)
        {
            printf("%0.1f Gigabits = %0.0f Megabits", pergunta2/1000000000, pergunta2/1000000000*1000);
        }else if(pergunta2 <= 999999999999999)
        {
            printf("%0.1f Terabits = %0.0f Gigabits", pergunta2/1000000000000, pergunta2/1000000000000*1000);
        }else if(pergunta2 <= 999999999999999999)
        {
            printf("%0.1f Petabits = %0.0f Terabits", pergunta2/1000000000000000, pergunta2/1000000000000000*1000);
        }
        printf("\n\nDeseja retornar ao Menu de Conversão? ");
        printf("\n1. Retornar ao Menu de Conversão");
        printf("\n2. Encerrar");
        printf("\nInsira o número da alternativa desejada: ");
        scanf("%i", &pergunta);
        
        if(pergunta == 1)
        {
            printf("\n");
            conversaoMemoria();
        }else
        {
            printf("\nPrograma encerrado.");
        }
    }
    
    void bytesBytes() //Módulo de conversão de bytes para bytes
    {
        printf("\nQuantos bytes você deseja converter? ");
        scanf("%lf", &pergunta2);
        if(pergunta2 <= 999)
        {
            printf("%0.1f Bytes = %0.0f Bytes", pergunta2, pergunta2/8);
        }else if(pergunta2 <= 999999)
        {
            printf("%0.2f Kilobytes = %0.0f Bytes", pergunta2/1000, pergunta2/1000*1000);
        }else if(pergunta2 <= 999999999)
        {
            printf("%0.1f Megabytes = %0.0f Kilobytes", pergunta2/1000000, pergunta2*1000);
        }else if(pergunta2 <= 999999999999)
        {
            printf("%0.1f Gigabytes = %0.0f Megabytes", pergunta2/1000000000, pergunta2/1000000000*1000);
        }else if(pergunta2 <= 999999999999999)
        {
            printf("%0.1f Terabytes = %0.0f Gigabytes", pergunta2/1000000000000, pergunta2/1000000000000*1000);
        }else if(pergunta2 <= 999999999999999999)
        {
            printf("%0.1f Petabytes = %0.0f Terabytes", pergunta2/1000000000000000, pergunta2/1000000000000000*1000);
        }
        
        printf("\n\nDeseja retornar ao Menu de Conversão? ");
        printf("\n1. Retornar ao Menu de Conversão");
        printf("\n2. Encerrar");
        printf("\nInsira o número da alternativa desejada: ");
        scanf("%i", &pergunta);
        
        if(pergunta == 1)
        {
            printf("\n");
            conversaoMemoria();
        }else
        {
            printf("\nPrograma encerrado.");
        }
    }
    
    void bitsBytes() //Módulo de conversão de bits para bytes
    {
        printf("\nQuantos Bits você deseja converter para Bytes? ");
        scanf("%lf", &pergunta2);
        if(pergunta2 <= 999)
        {
            printf("%0.1f Bits = %0.0f Bytes", pergunta2, pergunta2/8);
        }else if(pergunta2 <= 999999)
        {
            printf("%0.1f Megabits = %0.0f Bytes", pergunta2/1000, pergunta2/8);
        }else if(pergunta2 <= 999999999)
        {
            printf("%0.1f Gigabits = %0.0f Bytes", pergunta2/1000000, pergunta2/8);
        }else if(pergunta2 <= 999999999999999)
        {
            printf("%0.1f Terabits = %0.0f Bytes", pergunta2/1000000000, pergunta2/8);
        }else if(pergunta2 <= 999999999999999999)
        {
            printf("%0.1f Petabits = %0.0f Bytes", pergunta2/1000000000000, pergunta2/8);
        }
        
        printf("\n\nDeseja retornar ao Menu de Conversão? ");
        printf("\n1. Retornar ao Menu de Conversão");
        printf("\n2. Encerrar");
        printf("\nInsira o número da alternativa desejada: ");
        scanf("%i", &pergunta);
        
        if(pergunta == 1)
        {
            printf("\n");
            conversaoMemoria();
        }else
        {
            printf("\nPrograma encerrado.");
        }
    }
    
    do
    {
        printf("Seja bem-vindo a conversão de Memória\n");
        printf("1. Conversão de Bits até Petabits\n");
        printf("2. Conversão de Bytes até Petabytes\n");
        printf("3. Conversão de Bits para Bytes\n");
        printf("Insira o número da alternativa desejada: ");
        scanf("%i", &pergunta);
        switch(pergunta)
        {
            case 1:
            {
                bitsBits();
            }
            break;
            
            case 2:
            {
                bytesBytes();
            }
            break;
            
            case 3:
            {
                bitsBytes();
            }
            break;
            
            default:
            {
                printf("\nInsira uma opção válida, tente novamente.\n\n");
            }
        }
    }while((pergunta < 1)||(pergunta > 3));
}
