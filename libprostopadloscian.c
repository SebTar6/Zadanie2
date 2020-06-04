#include "libprostopadloscian.h"

float Prostopadloscian(float b1, float b2, float h){
    float obj = b1*b2*h;
    return obj;
}

void Obj_prostopadloscian(){
    float b1, b2, h;
    printf("Podaj dlugosc pierwszego z bokow podstawy: \n");
    scanf("%f", &b1);
    printf("Podaj dlugosc drugiaego z bokow podstawy: \n");
    scanf("%f", &b2);
    printf("Podaj wartosc wysokosci prostopadloscianu: \n");
    scanf("%f", &h);
    printf("Objetosc prostopadloscianu o wskazanych wymiarach wynosi: %f\n", Prostopadloscian(b1, b2, h));
}
