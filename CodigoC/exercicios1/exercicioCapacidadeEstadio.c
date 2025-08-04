#include <stdio.h>

int main()
{
    
    int stadiumLotation, publicStadium;
    float porcentLotation;

    printf("Qual a capacidade maxima de publico no estadio?\n");
    scanf("%d", &stadiumLotation);
    
    printf("Qual o publico do estadio?\n");
    scanf("%d", &publicStadium);

    porcentLotation = ((float)publicStadium/stadiumLotation)*100;

    if(porcentLotation > 90){
        printf("Neo Quimica Arena! %.2f", porcentLotation);
    }
    
    else if(porcentLotation > 70){
        printf("Otimo publico! Mas não chega perto da NeoQuimica! %.2f", porcentLotation);
    }
    
    else if(porcentLotation > 50){
        printf("Lembra a Vila Belmiro! %.2f", porcentLotation);
    }
    else{
        printf("Voce esta no Alianz ou no Morumbis? %.2f", porcentLotation);
    }


    return 0;
}