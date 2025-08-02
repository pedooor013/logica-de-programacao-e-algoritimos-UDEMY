#include <stdio.h>

int main()
{
    
    int totalGoals, totalMatchs;
    float average;

    printf("Qual foi o seu total de gols nessa temporada?\n");
    scanf("%d", &totalGoals);

    printf("Qual foi o seu total de partidas nessa temporada?\n");
    scanf("%d", &totalMatchs);
    
    average = totalGoals / totalMatchs;

    printf("A sua media de gols por partida nessa temporada foi de %.0f", average);

    return 0;
}