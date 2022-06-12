#include <stdio.h>
#include "pole.h"

void pole()
{
    double bok;
    printf("Dlugosc boku kwadratu: ");
    scanf("%lf", &bok);

    if ( bok<0 ){
        printf("Niepoprawna dlugosc\n");
    }
    else{
        printf("Pole kwadratu: ");
        printf("%lf\n", (bok * bok));
    }
}
