#include <stdio.h>
#include "objetosc.h"

void objetosc()
{
    float bok;
    printf("Dlugosc krawedzi szczescianu: ");
    scanf("%f", &bok);

    if ( bok<0 ){
        printf("Niepoprawna dlugosc\n");
    }
    else{
        printf("Objetosc szescianu: ");
        printf("%f\n", bok*bok*bok);
    }
}