#include <stdio.h>

void funcaovelocidade(){
    int decide1,decide2;
    float valor,ms,kmh,mph,knos,fts;
    printf("Insira um valor:");
    scanf("%f", &valor);
    printf("Qual sua unidade de medida inicial? \n1-m/s\n2-km/h\n3-mph(Milhas por hora)\n4-knos(nós)\n5-fts(Pés por segundo)\n-->");
    scanf("%d", &decide1);
    if(decide1==1){
        printf("Para qual unidade deseja transformar? \n1-km/h\n2-mph(Milhas por hora)\n3-knos(nós)\n4-fts(Pés por segundo)\n-->");
        scanf("%d", &decide2);
            if(decide2==1){
                kmh = valor*3.6;
                printf("O resultado é: %0.2f km/h", kmh);
            }
            else if(decide2==2){
                mph = valor*2.23694;
                printf("O resultado é: %0.2f mph", mph);
            }
            else if(decide2==3){
                knos = valor*1.94384;
                printf("O resultado é: %0.2f nós", knos);
            }
            else if(decide2==4){
                fts = valor*3.28084;
                printf("O resultado é: %0.2f fts", fts);
            }
            else{
                printf("Opção inválida!");
            }
    }
    else if(decide1==2){
        printf("Para qual unidade deseja transformar? \n1-m/s\n2-mph(Milhas por hora)\n3-knos(nós)\n4-fts(Pés por segundo)\n-->");
        scanf("%d", &decide2);
            if(decide2==1){
                ms = valor/3.6;
                printf("O resultado é: %0.2f m/s", ms);
            }
            else if(decide2==2){
                mph = valor / 1.60934;
                printf("O resultado é: %0.2f mph", mph);
            }
            else if(decide2==3){
                knos = valor/1.94384;
                printf("O resultado é: %0.2f nós", knos);
            }
            else if(decide2==4){
                fts = valor/3.28084;
                printf("O resultado é: %0.2f fts", fts);
            }
            else{
                printf("Opção inválida!");
            }
    }
    else if(decide1==3){
        printf("Para qual unidade deseja transformar? \n1-m/s\n2-km/h\n3-knos(nós)\n4-fts(Pés por segundo)\n-->");
        scanf("%d", &decide2);
            if(decide2==1){
                ms = valor*0.44704;
                printf("O resultado é: %0.2f m/s", ms);
            }
            else if(decide2==2){
                kmh = valor*1.60934;
                printf("O resultado é: %0.2f km/h", kmh);
            }
            else if(decide2==3){
                knos = valor*0.868976;
                printf("O resultado é: %0.2f nós", knos);
            }
            else if(decide2==4){
                fts = valor*1.46667;
                printf("O resultado é: %0.2f fts", fts);
            }
            else{
                printf("Opção inválida!");
            }
    }
    else if(decide1==4){
        printf("Para qual unidade deseja transformar? \n1-m/s\n2-km/h\n3-mph\n4-knos(nós)\n-->");
        scanf("%d", &decide2);
            if(decide2==1){
                ms = valor*0.514444;
                printf("O resultado é: %0.2f m/s", ms);
            }
            else if(decide2==2){
                kmh = valor*1.852;
                printf("O resultado é: %0.2f km/h", kmh);
            }
            else if(decide2==3){
                mph = valor*1.15078;
                printf("O resultado é: %0.2f mph", mph);
            }
            else if(decide2==4){
                fts = valor*1.68781;
                printf("O resultado é: %0.2f fts", fts);
            }
            else{
                printf("Opção inválida!");
            }
    }
        else if(decide1==5){
        printf("Para qual unidade deseja transformar? \n1-m/s\n2-km/h\n3-mph\n4-fts(Pés por segundo)\n-->");
        scanf("%d", &decide2);
            if(decide2==1){
                ms = valor*0.3048;
                printf("O resultado é: %0.2f m/s", ms);
            }
            else if(decide2==2){
                kmh = valor*1.09728;
                printf("O resultado é: %0.2f km/h", kmh);
            }
            else if(decide2==3){
                mph = valor*0.681818;
                printf("O resultado é: %0.2f mph", mph);
            }
            else if(decide2==4){
                knos = valor*0.592484;
                printf("O resultado é: %0.2f nós", knos);
            }
            else{
                printf("Opção inválida!");
            }
    }
    else{
        printf("Opção Inválida!");
    }
}
