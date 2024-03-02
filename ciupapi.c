#include "ciupapi.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "munianio.h"

//the list of products
char products[9][11] = {
                    "Biscuiti",
                    "Bomboane",
                    "Inghetata",
                    "Macaroane",
                    "calculator",
                    "Margarina",
                    "Mezeluri",
                    "telefon",
                    "ciocolata"
    };


    // the list of codes
char theCode[9][15] = {
                    "press no. 1",
                    "press no. 2",
                    "press no. 3",
                    "press no. 4",
                    "press no. 5",
                    "press no. 6",
                    "press no. 7",
                    "press no. 8",
                    "press no. 9"


    };

    //the list of prices
float thePrice[15] = {

                    2.00,
                    7.00,
                    12.99,
                    8.60,
                    3.99,
                    4.70,
                    9.20,
                    10.40,
                    10.40
    };

float total1 = 0;
int n = 0;
int prod = 0;
int produse[100];
int freq[100]={0};


void tableRowTop() {

    //printing the head of the table
    printf ("*---------------*---------------*---------------*\n");
    printf ("  %s\t   %s\t    %.2f ron                        \n", products, theCode, thePrice[0]);
    printf ("*---------------*---------------*---------------*\n");

}


void tableRowBot() {

    //printing the bottom of teh table
    printf ("  %s\t   %s\t    %.2f ron                           \n", products + 8, theCode + 8, thePrice[8]);
    printf ("*---------------*---------------*---------------*\n");
}

void table(int rowsNumber) {

    //printing table
    int i;
    tableRowTop();
    for(i = 1; i < rowsNumber - 1 ; i++) {


    printf ("  %s\t   %s\t    %.2f ron                             \n", products + i, theCode + i, thePrice[i]);
    printf ("*---------------*---------------*---------------*\n");

    }
    tableRowBot();

}


void chooseYourBag() {



    printf ("Choose a product that you want to buy pressing the number coresponding to it and then press 0 to end the shopping session: \n");
    while(1) {

        scanf( "%d", &prod);       //citesti cate un produs din tabel
        printf("%s \t\t %.2f ron\n",products[prod - 1],thePrice[prod - 1]);     //afiseaza ce produs ai luat
        produse[n] = prod;  //incarcam vectoru ciudat cu id ul produselor

        if (prod == 0)          //daca citesti 0 se inchide whileul adica nu mai citesti produse
            break;

        n++;

    }
    for(int i = 0; i < n; i++)
        freq[produse[i]]++;     //vecoru de frecventa numara cate produse de acelasi fel ai din vectorul ciudat aka produse[n];

}

void showYourTOtal() {

    system("cls");      //curatam consola
    printf ("Your bag contains:\n");

    for(int i = 1; i <= 8; i++) {
            if(freq[i] != 0) {
                total1 = total1 + (freq[i] * thePrice[i - 1]);        //calculam pretul total1
                printf("%dx%s \t %dx%.2f ron\n", freq[i], products[i-1], freq[i], thePrice[i-1]); //afisam cate din fiecare produse avem
            }
    }
            printf ("-------------------------------\n");
            printf ("Total:           %.2f ron\n", total1);  //afisam totaliu

  continueShopping();



}


