#include <stdio.h>

int main()
{

    int numero = 10;
    float numeroQuebrado = 50.49;
    char letra = 'V';
    char meuNome[6] = "Pedro";
  
    printf("Essa é uma variável int %d \n", numero);
    printf("Essa é uma variável float %.2f \n", numeroQuebrado);
    printf("Essa é uma variável char %c \n", letra);
    printf("Essa é uma variável char em forma de string %s\n", meuNome);

// IMPORTANTE, ao declarar um char ele só aceita UMA UNICA LETRA e deve SEMPRE estar no meio de aspas simples (''),
// caso queira declarar um char do tipo string (com mais de uma letra) devo colocar o numero de casas que vai ser ocupado na frente e entre []
// SEMPRE colocar 1 casa a mais SEMPRE.

    //printf("Essa é uma variável _Bool ", booleana, "\n");

    return 0;
}