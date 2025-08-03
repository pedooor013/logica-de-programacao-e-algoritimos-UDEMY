#include <stdio.h>

int main()
{
    int totalPoints, totalMatches, countWins, countDefeat, countDraw;


    
    printf("Quantas jogos voce ganhou? \n");
    scanf("%d", &countWins);
    totalPoints = countWins*3;
    
    printf("Quantas jogos voce empatou? \n");
    scanf("%d", &countDraw);
    totalPoints = totalPoints+countDraw;
    
    printf("Quantas jogos voce perdeu? \n");
    scanf("%d", &countDefeat);

    totalMatches = countWins + countDefeat + countDraw;

    printf("Em %d partidas voces fizeram %d pontos!", totalMatches, totalPoints);

    return 0;
}