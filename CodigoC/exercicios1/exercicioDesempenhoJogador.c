#include <stdio.h>

int main()
{
    
    int agePlayer, goalsPlayer;

    printf("Qual a sua idade?\n");
    scanf("%d", &agePlayer);
    
    printf("Quantos gols voce fez nessa temporada?\n");
    scanf("%d", &goalsPlayer);

    if(agePlayer <= 20 && goalsPlayer > 10){
        printf("Jogador jovem e muito promissor");
    }
    else if(agePlayer <= 20 && goalsPlayer <= 10){
        printf("Jogador jovem e em desenvolvimento");
    }
    else if(agePlayer > 20 && goalsPlayer > 15){
        printf("Jogador experiente em uma grande fase!");
    }
    else{
        printf("Um jogador experiente que não marca tantos gols");
    }


    return 0;
}