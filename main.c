#include <stdio.h>
#include <stdlib.h>
#include "ciupapi.h"
#include "munianio.h"
#include "ciupicaros.h"
#include <string.h>
#include "FaciOCafea.h"
#include <time.h>
 extern float totalF;
int main()
{
    printf("|||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||       SelfCheck-Out Machine       ||||||\n");
    printf("|||||||||||||||||||||||||||||||||||||||||||||||\n");  //line 7-8 we print the title
    printf ("\n");

    randomComboPrint();
    yourBDay();
    table(13); //line 9 we print the table
    chooseYourBag();
    showYourTOtal();
    birthdayDis();
    no10FromFile();
    customerTen();

    miniGame();

    printf ("----------------------------\n");
    printf ("Final Total is: %.2f\n", totalF);
    printf ("----------------------------\n");
    printf("\n");

    return 0;

}
