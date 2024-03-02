#include "munianio.h"
#include <stdio.h>
#include "ciupapi.h"
#include <stdlib.h>


float total1;
int freq[100];
int n;

void continueShopping() {

    int decision;

    printf ("Did u forget to buy something?\n");
    printf ("Press 1 for yes or 0 for no: ");

    scanf("%d", &decision);

    printf("\n");

    if (decision == 1) {

        n=0;
        table(7);
        chooseYourBag();
        total1=0;
        showYourTOtal();

    }
}
void combo1(){

    float totaln;

    if( freq[1] == 3 && freq[6] == 2 ) {

            printf ("Congratulations!! You bought the combo with 3 biscuiti and 2 margarine so you will get 10%% off your pourchase\n");
            totaln = total1 - (total1 / 10);

            printf( "Totalul nou este %.2f\n",totaln);
        total1 = totaln;

        }
}
void combo2() {

    float totaln;

    if( freq[2] == 1 && freq[3] == 2 ) {

            printf ("Congratulations!! You bought the combo with 1 bomboane and 2 inghetatat so you will get 20%% off your pourchase\n");
            totaln = total1 - (2 * (total1 / 10));

            printf( "Totalul nou este %.2f\n",totaln);
        total1 = totaln;


        }
}


int month;
int year;
int day;

void yourBDay() {

    printf ("Enter the date of your birthday\n");
    printf ("Day: ");
    scanf ("%d", &day);
    printf ("Month: ");                             //citesc datele pentru data de nastere
    scanf ("%d", &month);
    printf ("Year: ");
    scanf ("%d", &year);
    if (month < 13) {       //vrefic daca luna e valida

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { //daca luna e valida veriic daca e luna cu 30 sau 31 de zile

            if (year > 1930 && year < 2015) {   //verific daca e un an decent in care sa fii inca in viata

                if(day > 31 || day <= 0) {      //verific daca ai introdus o data vvalida

                    printf ("Invalid day. Try again\n");
                    yourBDay();

                }else if (day < 32 && day > 0) {    //verific daca ai introdus o data valida

                    //printf("You're are all set\n");
                    reEnterUrBday();
                }

            }else if (year >= 2018 && year <= 2022) {       //verific ce an de nastere ai pus si daca ai varsta necesara ca sa cumperi ceva

                printf("A baby shouldn't be allowd to buy stuff\n");
                yourBDay();

            }else if (year <= 1910) {                       // verific daca esti mort

                printf("Are dead people a thing now?\n");
                yourBDay();

            }else if (year >= 2022) {                       // verific daca ai calatorit in timp

                printf ("Are you from the future?\n");
                yourBDay();

            }


        }

        if (month == 4 || month == 5 || month == 7 || month == 9 || month == 11) {  // aici verific daca e luna cu 30 de zile

            if (year > 1910 && year < 2018) {

                if(day > 30 || day <= 0) {

                    printf ("invalid day. Try again\n");
                    yourBDay();

                }else if (day < 32 && day > 0) {

                    //printf("You're are all set\n");
                    reEnterUrBday();                         // fac aceleasi chestii ca mai sus dar pentru lunile cu 30 de zile

                }
            }else if (year >= 2018 && year <= 2022) {

                printf("A baby shouldn't be allowd to buy stuff\n");
                yourBDay();

            }else if (year <= 1910) {

                printf("Are dead people a thing now?\n");
                yourBDay();

            }else if (year >= 2022) {

                printf ("Are you from the future?\n");
                yourBDay();

            }
        }

    }else {

            printf ("Invalid month\n");     // daca luna este mai mare decat 12 afisez ca luna nu este buna
            yourBDay();

        }

    if (month == 2) {   // caz special pentru luna februarie

        if(year <= 1910) {

            printf ("Are dead people a thing now?");
            yourBDay();

        }else if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))) { // verific daca anul introdus este an bisect

                if (year > 1910 && year < 2018) {
                    if (day > 30 || day < 0) {

                        printf ("Invalid day. Try again\n");        // verific daca ziua introdusa e in intervalul Z\[1,29]
                        yourBDay();

                    }else if(day > 0 && day < 30) {             //verific daca ziua introdusa e in intervalul [1,29]

                        //printf("You're all set\n");
                        reEnterUrBday();

                }

            }else if (year >= 2018 && year <= 2022) {

                printf("A baby shouldn't be allowd to buy stuff\n");
                yourBDay();

            }else if (year <= 1910) {

                printf("Are dead people a thing now?\n");                   //163-178 verific daca anul e valid sau ba
                yourBDay();

            }else if (year >= 2022) {

                printf ("Are you from the future?\n");
                yourBDay();

            }
        }else {         // daca nu e an bisect intra pe ramura asta

            if(day <= 0 || day >= 29) {

                    printf ("Invalid day. Try again\n");        //verfic daca eista ziua in calendar
                    yourBDay();

            }else if (day > 0 && day < 29) {                    // din nou ^

                //printf("You're all set\n");
                reEnterUrBday();

            }else if (year >= 2018 && year <= 2022) {

                printf("A baby shouldn't be allowd to buy stuff\n");
                yourBDay();

            }else if (year <= 1910) {

                printf("Are dead people a thing now?\n");           // verific daca anul e valid
                yourBDay();

            }else if (year >= 2022) {

                printf ("Are you from the future?\n");
                yourBDay();

            }
        }
    }



}

void birthdayDis() {        //discount daca suma datelor in data ta de nastere este para

    float totaln;

    if ((day + month + year) % 2 == 0) {

        printf ("Congrats, becuase ur birthday is an even numebr, u get 20%% off your bag!\n");

        totaln = total1 - (2 * (total1 / 10));

            printf( "Totalul nou este %.2f\n",totaln);
        total1 = totaln;
    }else {

        printf("te ai nascut cu o zi prea repede asa ca nu iti putem oferi discountul cu suma numerelor din data ta de nastere sa fie numar par\n");


    }
}

void reEnterUrBday() {

    int decision;

    printf ("Did u enter your birthday date wrong?\n");
    printf ("Press 1 for yes or 0 for no: ");

    scanf("%d", &decision);

    printf("\n");

    if (decision == 1) {

    system("cls");
    yourBDay();

    }else if (decision == 0) {

        printf ("You're all set!\n");
    }
}
