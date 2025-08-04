#include <stdio.h>

int main()
{
    
    int countYellowCard;

    printf("Digite quantos cartoes voce levou no jogo");
    scanf("%d", &countYellowCard);

    if(countYellowCard >= 2){
        printf("Voce foi expulso!");
        }else{
            printf("Voce nao foi expulso, mas tome cuidado!");
        }

    return 0;
}