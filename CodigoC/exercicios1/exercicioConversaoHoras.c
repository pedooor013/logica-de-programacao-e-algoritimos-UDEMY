#include <stdio.h>

int main()
{
    
    int hours, restMinutes, minutes;

    printf("Quantos minutos voce jogou? \n");
    scanf("%d", &minutes);
    hours = minutes / 60;
    restMinutes = minutes % 60;
    printf("%d", restMinutes);

    printf("Voce jogou pro %d horas e %d minutos", hours, restMinutes);

    return 0;
}