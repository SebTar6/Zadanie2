#include <stdio.h>
#include <stdlib.h>
#include "libprostokat.h"
#include "libprostopadloscian.h"

int main()
{
    printf("Witam w programie! Prosze wybrac:\n");
    printf("1 - obliczanie pola prostokata.\n");
    printf("2 - obliczanie objetosci prostopadloscianu.\n");
    printf("3 - wyjscie z programu.\n"); 
    char wybor;
    scanf("%c", &wybor);
    if(wybor == '1'){
        Pole_prostokat();
    }
    else if(wybor == '2'){
        Obj_prostopadloscian();
    }
    else if(wybor == '3'){
        printf("Nastapi wyjscie z programu.\n");
    }
    else{
        printf("Wybrano zly numer, nastapi wyjscie z programu.\n");
    }
    return 0;
}
