#include <stdio.h>
#include <stdlib.h>
#include "ciupapi.h"
#include "munianio.h"
#include "ciupicaros.h"
#include <string.h>


int main()
{
    printf("SelfCheck-Out Machine"); //line 7-8 we print the title
    printf ("\n");
    yourBDay();
    table(9); //line 9 we print the table
    chooseYourBag();
    showYourTOtal();
    combo2();
    combo1();
    birthdayDis();


    return 0;

}
