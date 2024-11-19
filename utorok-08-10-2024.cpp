#include <iostream>
#include <cmath>
#include <time.h>
#include <ctime>
#include <iomanip>
#include <vector>
#include <chrono>
#include <cfloat>
#define PI 3.141592653 

using namespace std;
// ----------------------------------------------------------------------------
//  Utorok 8.10.2024
// ----------------------------------------------------------------------------

int nums() {
    int mujnazev;
    printf("Zadej cislo: ");
    scanf_s("%d", &mujnazev);
    printf("Bylo zadane:  %d\n", mujnazev);

    float cokoliv;
    printf("Zadej destin: ");
    scanf_s("%f", &cokoliv);
    printf("Bylo zadane: %f\n", cokoliv);

    double d;
    printf("Zadej double: ");
    scanf_s("%lf", &d);
    printf("Bylo zadane: %f\n", d);
    printf("velikost pameti: %d bytu \n", sizeof(d));

    char znak;
    getchar();
    printf("Zadejte 1 znak: ");
    scanf_s("%c", &znak);
    printf("Byl zadany znak: %c\n", znak);
    printf("ASCII kod znaku: %d\n", znak);

    char slovo[10];
    getchar();
    printf("Zadej retez max 10 znaku: ");
    scanf_s("%10s", slovo);
    printf("Retez zanku: %10s\n", slovo);

    /*int i=0;
    while (slovo[i] != "\000") {
        printf("%c\n", slovo[i]);
        i++;
    }*/
}
int don_p(){
    long int a, zaloha;
    int suma = 0, cifra;

    a = 124545435;
    zaloha = a;
    while (a > 0) {
        cifra = a % 10;
        suma += cifra;
        a = a / 10;
    }
    printf("cif soucet %ld je %d \n", zaloha, suma);
    fflush(stdin);
    getchar();
}
