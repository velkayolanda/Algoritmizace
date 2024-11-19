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
//  Piatok 11.10.2024
// ----------------------------------------------------------------------------

void VstupData(int p[]) {
    for (int i = 0; i < 10; i++)
    {
        printf("Zadejte %2d. prvek celociselneho pole:", i + 1);
        scanf_s("%d",&p[i]);
    }
}
void VystupData(int p[]) {
    printf("Zadane data: ");
    for (int i = 0; i < 10; i++)
        printf("%2d ",p[i]);
 
}
double aritmetic_prumer(int p[]) {
    double vysledek, suma = 0.0;
    for (int i = 0; i < 10; i++)
        suma += p[i];
    vysledek= suma / 10;
    return vysledek;
}
double Harmonic_prumer(int p[]) {
    double vysledek, suma = 0.0;
    for (int i = 0; i < 10; i++)
        suma += 1.0 / p[i];
    vysledek = 10 / suma;
    return vysledek;
}
double Kvad_prumer(int p[]) {
    double vysledek, suma = 0.0;
    for (int i = 0; i < 10; i++)
        suma += p[i]* p[i];
    vysledek = sqrt(suma/10);
    return vysledek;
}
double Geo_prumer(int p[]) {
    double vysledek, soucin = 1.0;
    for (int i = 0; i < 10; i++)
        soucin *= p[i];
    vysledek = pow(soucin, 1.0/10);
    return vysledek;
}
void selection_sort(int A[], int n) {
    int i, j, small, temp;
    for (i = 0; i < n; i++)
    {
        small = i;
        for (j = i + i; j < n; j++)
        {
            if (A[j] < A[small])
                small = j;
        }
        temp = A[i];
        A[i] = A[small];
        A[small] = temp;
    }
}
void minule() {
    int pole[10];
    double aritprum;
    double harmprum;
    double kvadprum, geoprum;
    aritprum = aritmetic_prumer(pole);
    VstupData(pole);
    VystupData(pole);
    printf("\nAritprumer je %6.3lf ", aritprum);
    harmprum = Harmonic_prumer(pole);
    printf("\nHarmonic prumer je %6.3lf ", harmprum);
    kvadprum = Kvad_prumer(pole);
    printf("\nKvadratic prumer je %6.3lf ", kvadprum);
    geoprum = Geo_prumer(pole);
    printf("\nGeometric prumer je %6.3lf ", geoprum);
    selection_sort(pole, 10);
    return 0;
}
