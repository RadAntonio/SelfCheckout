#include <stdio.h>
#include "ciupicaros.h"
#include "munianio.h"
#include "ciupapi.h"
#include <stdlib.h>
#



extern float total;
extern float totalF;
extern int n;
int nrGame,i;

void no10FromFile() {

    FILE *f = fopen("test2.txt", "r");



    fscanf(f, "%d", &n);
    //printf("%d\n", n + 1);
    fclose(f);

    f = fopen("test2.txt", "w");
    n++;
    fprintf(f, "%d", n);
    fclose(f);

}

void customerTen() {

    float totaln;
    printf("\n");
    printf ("You are the %dth customer", n);
    printf("\n");

    if(n % 10 == 0) {
        printf("You will get a 10%% discount\n", n);
        printf("\n");

        totaln = totalF -(1 * ( totalF / 10));

        totalF = totaln;
    }

}
void miniGame(){

    printf("Would you like to play a game and get 5%% discount on your items?\nPress 1 for yes or 0 for no: ");

    scanf("%d",&i);

    if(i == 1)
    {
        printf("If you want to win you must choose the corect number between 1 and 10\n");

        int low = 1, up=10;

        srand(time(NULL));


        nrGame = (rand() % (up - low + 1)) + low;
        int choise;
    printf("Your number is: ");
        scanf("%d",&choise);

    float totaln;

    if(nrGame == choise) {

            printf ("You foud the correct number so you get a 5%% discount\n");
            totaln = totalF - (0.5 * ( totalF / 10));

            totalF = totaln;

        }
    else printf("We are sorry but the number was not correct.The number i was thinking of was %d\n",nrGame);

    }

    else if(i==0)
        printf("If you don't want to play the game we will take you to the final price\n");


}




