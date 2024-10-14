// cviceni_console_app_3_10_2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <time.h>
#define M_PI 

using namespace std;

// ----------------------------------------------------------------------------
//  Piatok 4.10.2024
// ----------------------------------------------------------------------------

//int SoucetVzorcem(int n) {
//    return (n * (n + 1) / 2);
//}
//
//int prumer()
//{
//    float p, a, b, c;
//    printf("zadej 3 kary: ");
//    scanf_s("%f", &a);
//    scanf_s("%f", &b);
//    scanf_s("%f", &c);
//    p = ((a + b + c) / 3);
//    printf("Prumer je %f", p);
//    getchar();
//    getchar();
//    return 0;
//}
//int kar1() {
//    std::cout << "Hello World!\n";
//    int n, i, soucet = 0, s;
//    printf("Zadej hodnotu N ty kare:");
//    scanf_s("%d", &n);
//    for (i = 1; i <= n; i++)        // nevim co to kurva dela
//    {
//        soucet = soucet + i;
//    }
//    s = SoucetVzorcem(n);
//    printf("Soucet karu od 1 po %d je %d", n, s);
//    getchar();
//    return 0;
//}
//int trojkar(){
//    float d, e, f;
//    printf("zadej 2 kary pro pravotrouhel: ");
//    scanf_s("%f", &d);
//    scanf_s("%f", &e);
//    f = sqrt(d * d + e * e);
//    printf("prepona karu %5.2f", f);
//    getchar();
//    getchar();
//    return 0;
//}

// ----------------------------------------------------------------------------
//  Utorok 8.10.2024
// ----------------------------------------------------------------------------

//int nums() {
//    int mujnazev;
//    printf("Zadej cislo: ");
//    scanf_s("%d", &mujnazev);
//    printf("Bylo zadane:  %d\n", mujnazev);
//
//    float cokoliv;
//    printf("Zadej destin: ");
//    scanf_s("%f", &cokoliv);
//    printf("Bylo zadane: %f\n", cokoliv);
//
//    double d;
//    printf("Zadej double: ");
//    scanf_s("%lf", &d);
//    printf("Bylo zadane: %f\n", d);
//    printf("velikost pameti: %d bytu \n", sizeof(d));
//
//    char znak;
//    getchar();
//    printf("Zadejte 1 znak: ");
//    scanf_s("%c", &znak);
//    printf("Byl zadany znak: %c\n", znak);
//    printf("ASCII kod znaku: %d\n", znak);
//
//    char slovo[10];
//    getchar();
//    printf("Zadej retez max 10 znaku: ");
//    scanf_s("%10s", slovo);
//    printf("Retez zanku: %10s\n", slovo);
//
//    /*int i=0;
//    while (slovo[i] != "\000") {
//        printf("%c\n", slovo[i]);
//        i++;
//    }*/
//}
//int don_p(){
//    long int a, zaloha;
//    int suma = 0, cifra;
//
//    a = 124545435;
//    zaloha = a;
//    while (a > 0) {
//        cifra = a % 10;
//        suma += cifra;
//        a = a / 10;
//    }
//    printf("cif soucet %ld je %d \n", zaloha, suma);
//    fflush(stdin);
//    getchar();
//}

// ----------------------------------------------------------------------------
//  Štvrtok 10.10.2024
// ----------------------------------------------------------------------------

//int JeTrojuhelnik(float a, float b, float c) {
//    int v = 1;
//    if ((a + b) < c || (a + c) < c || (b + c) < a)
//        v = 0;
//    return v;
//}
//int JeTrouhelnik2(float a, float b, float c){
//    bool vysledek2 = true;
//    if ((a + b) < c || (a + c) < c || (b + c) < a)
//        vysledek2 = false;
//    return vysledek2;
//}
//int trouhelniky() {
//    float x, y, z;
//    int vysledek;
//    bool vysledek2;
//    printf("zadejte 3 cisla:");
//    scanf_s("%f", &x);
//    scanf_s("%f", &y);
//    scanf_s("%f", &z);
//    vysledek = JeTrojuhelnik(x, y, z);
//    vysledek2 = JeTrouhelnik2(x, y, z);
//    printf("Rozhodnuti: %s", (vysledek) ? "JE" : "NENI");
//    printf("Rozhodnuti: %s", (vysledek2) ? "JE" : "NENI");
//    fflush(stdin);
//    getchar();
//    return 0;
//}
//int matika() {
//    int stupne;
//    double sinus, cosinus, tangens;
//    printf("stupne sinus cosinus tangens\n");
//    for (stupne = 0; stupne < 190; stupne += 10) {
//        sinus = sin(stupne * 3.14 / 180);
//        cosinus = cos(stupne * 3.14 / 180);
//        tangens = sinus / cosinus;
//        printf("%3d     %5.3lf  %6.3lf  %7.3lf\n", stupne, sinus, cosinus, tangens);
//    }
//    getchar();
//    return 0;
//}

// ----------------------------------------------------------------------------
//  Piatok 11.10.2024
// ----------------------------------------------------------------------------

//void VstupData(int p[]) {
//    for (int i = 0; i < 10; i++)
//    {
//        printf("Zadejte %2d. prvek celociselneho pole:", i + 1);
//        scanf_s("%d",&p[i]);
//    }
//}
//void VystupData(int p[]) {
//    printf("Zadane data: ");
//    for (int i = 0; i < 10; i++)
//        printf("%2d ",p[i]);
// 
//}
//double aritmetic_prumer(int p[]) {
//    double vysledek, suma = 0.0;
//    for (int i = 0; i < 10; i++)
//        suma += p[i];
//    vysledek= suma / 10;
//    return vysledek;
//}
//double Harmonic_prumer(int p[]) {
//    double vysledek, suma = 0.0;
//    for (int i = 0; i < 10; i++)
//        suma += 1.0 / p[i];
//    vysledek = 10 / suma;
//    return vysledek;
//}
//double Kvad_prumer(int p[]) {
//    double vysledek, suma = 0.0;
//    for (int i = 0; i < 10; i++)
//        suma += p[i]* p[i];
//    vysledek = sqrt(suma/10);
//    return vysledek;
//}
//double Geo_prumer(int p[]) {
//    double vysledek, soucin = 1.0;
//    for (int i = 0; i < 10; i++)
//        soucin *= p[i];
//    vysledek = pow(soucin, 1.0/10);
//    return vysledek;
//}
//void selection_sort(int A[], int n) {
//    int i, j, small, temp;
//    for (i = 0; i < n; i++)
//    {
//        small = i;
//        for (j = i + i; j < n; j++)
//        {
//            if (A[j] < A[small])
//                small = j;
//        }
//        temp = A[i];
//        A[i] = A[small];
//        A[small] = temp;
//    }
//}
//void minule() {
//    int pole[10];
//    double aritprum;
//    double harmprum;
//    double kvadprum, geoprum;
//    aritprum = aritmetic_prumer(pole);
//    VstupData(pole);
//    VystupData(pole);
//    printf("\nAritprumer je %6.3lf ", aritprum);
//    harmprum = Harmonic_prumer(pole);
//    printf("\nHarmonic prumer je %6.3lf ", harmprum);
//    kvadprum = Kvad_prumer(pole);
//    printf("\nKvadratic prumer je %6.3lf ", kvadprum);
//    geoprum = Geo_prumer(pole);
//    printf("\nGeometric prumer je %6.3lf ", geoprum);
//    selection_sort(pole, 10);
//    return 0;
//}

// ----------------------------------------------------------------------------
//  Pondelok 14.10.2024
// ----------------------------------------------------------------------------

void ukazmatic(int m[5][5]) {
    for (int r = 0; r < 5; r++) {
        printf("\n");
        for (int s = 0; s < 5; s++)
            printf("    %3d", m[r][s]);
    }
}
void SectiMatice(int m1[5][5], int m2[5][5], int ms[5][5]) {
    for (int r = 0; r < 5; r++)
        for (int s = 0; s < 5; s++)
            ms[r][s] = m1[r][s] + m2[r][s];
}
void NahodnaMat(int m[5][5]) {
    srand((unsigned int)time(NULL));
    for (int r = 0; r < 5; r++)
        for (int s = 0; s < 5; s++)
            m[r][s] = (rand() % 100) + 1;

}
int main()
{
    int M[5][5], N[5][5], S[5][5];
    for (int r = 0; r < 5; r++)
        for (int s = 0; s < 5; s++)
            if (r == s)
                M[r][s] = 1;
            else
                M[r][s] = 0;
    ukazmatic(M);
    printf("\n");
    for (int r = 0; r < 5; r++)
        for (int s = 0; s < 5; s++)
            if (r + s == 4)
                N[r][s] = 1;
            else
                N[r][s] = 0;
    ukazmatic(N);
    printf("\n");
    SectiMatice(M, N, S);
    ukazmatic(S);
    printf("\n");
    NahodnaMat(M);
    ukazmatic(M);
    printf("\n");
    NahodnaMat(N);
    ukazmatic(N);
    printf("\n");
    SectiMatice(M, N, S);
    ukazmatic(S);
    printf("\n");
    
    int max = S[0][0], maxr = 0, maxs = 0;
    for (int r=0;r<5;r++)
        for(int s=0;s<5;s++)
            if (S[r][s] > max) {
                max = S[r][s];
                maxr = r;
                maxs = s;
            }
    printf("\nMaximum he %3d a je na radku %d ve sloupci %d", max, maxr + 1, maxs + 1);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
