#include <stdio.h>

int main()
{
    
    float salaryFirstPlayer, salarySecondPlayer, biggerSalary;

    printf("Qual o salário do primeiro jogador?\n");
    scanf("%f", &salaryFirstPlayer);
    biggerSalary = salaryFirstPlayer;

    printf("Qual o salário do segundo jogador?\n");
    scanf("%f", &salarySecondPlayer);
    
    if(salarySecondPlayer > biggerSalary)
    {
        biggerSalary = salarySecondPlayer;
        printf("O maior salario eh de R$%.2f, e eh do segundo jogador!", biggerSalary);
    }else if (salarySecondPlayer == biggerSalary)
    {
        printf("O maior salario eh de R$%.2f e o salario eh o mesmo para ambos os jogadores!", biggerSalary);
    }else{
        printf("O maior salario eh de R$%.2f, e eh do primeiro jogador!", biggerSalary);
    }
    

    return 0;
}