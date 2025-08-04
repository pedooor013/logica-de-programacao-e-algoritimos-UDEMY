#include <stdio.h>

int main()
{
    int playerGoals;

    printf("Quantos gols voce fez nessa temporada?\n");
    scanf("%d", &playerGoals);

    if(playerGoals>10){
        printf("Exelente temporada! Parabens!");
    }else if(playerGoals>=5){
        printf("Boa temporada!");
    }else{
        printf("Temporada abaixo do esperado!");
    }
    

    return 0;
}