#include "libprostokat.h"

float Prostokat(float b1, float b2){
    float pole = b1*b2;
    return pole;
}

void Pole_prostokat(){
    float b1, b2;
    printf("Podaj dlugosc pierwszego z bokow: \n");
    scanf("%f", &b1);
    printf("Podaj dlugosc drugiego z bokow: \n");
    scanf("%f", &b2);
    printf("Pole prostokata o wskazanych wymiarach wynosi: %f\n", Prostokat(b1, b2));
}
