#include <stdio.h>

int main()
{
    int userAge;

    printf("Digite a sua idade: ");
    scanf("%d", &userAge);
   
    if(userAge >= 18){
        printf("MAIOR");
    }else{
        printf("MENOR");
    }


    return 0;
}