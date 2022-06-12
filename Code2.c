#include <stdio.h>
#include <locale.h>
#include "pole.h"
#include "objetosc.h"


int main()
{
    int wybor = 0;
    while(1){
    	printf("\t\tMENU\n\n1 - Pole kwadartu\n2 - Objętość sześcianu\n3 - Wyjscie\n");
    	printf("\nWybor: ");
    	scanf("%d", &wybor);
    	printf("\n");
        
    	if (wybor == 1 ){
    		pole();
    	}
    	else if (wybor == 2){
    		objetosc();
    	}
    	else if (wybor == 3 ){
    		printf("Koniec dzialania\n");
            break;
    	}
    	else{
    		printf("Niepoprawny wybor\n");
    	}
    }
    return 0;
}
