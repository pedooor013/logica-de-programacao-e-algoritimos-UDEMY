#include <stdio.h>

int main()
{
    char nomeJogador[21];
    int idadeJogador;
    int golsJogador;

    printf("Jogador, qual o seu primeiro nome?\n");
    scanf("%s", &nomeJogador);

    printf("Bem vindo, %s! Me diga, qual a sua idade?\n", nomeJogador);
    scanf("%d", &idadeJogador);

    printf("Então %s, quantos gols você já fez na sua carreira?\n", nomeJogador);
    scanf("%d", &golsJogador);

    printf("Nome Jogador: %s\nIdade: %d\nTotal de gols: %d", nomeJogador, idadeJogador, golsJogador);

    return 0;
}