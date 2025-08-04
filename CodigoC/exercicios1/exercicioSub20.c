#include <stdio.h>

int main()
{
    
    int playerAge;

    printf("Digite a sua idade: \n");
    scanf("%d", &playerAge);

    if(playerAge <= 20){
        printf("Voce pode jogar no sub 20!");
    }else{
        printf("Voce tem mais de 20 anos! Deve jogar no profissional!");
    }

    return 0;
}