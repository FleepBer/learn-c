#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Criando uma vari�vel e atribuindo uma sting a ela.
    char characterName [] = "Chico";
    //Criando um n�mero inteiro e atribuindo um valor.
    int characterAge = 22;

    //Escreve isso e chamando variav�is
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    //Reatribuindo um valor
    characterAge = 25;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d\n", characterAge);

    return 0;
}
