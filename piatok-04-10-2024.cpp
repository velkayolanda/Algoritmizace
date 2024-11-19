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

//----------------------------------------------------------------------------
//Piatok 4.10.2024
//----------------------------------------------------------------------------

 int SoucetVzorcem(int n) {
     return (n * (n + 1) / 2);
 }
 
 int prumer()
 {
     float p, a, b, c;
     printf("zadej 3 kary: ");
     scanf_s("%f", &a);
     scanf_s("%f", &b);
     scanf_s("%f", &c);
     p = ((a + b + c) / 3);
     printf("Prumer je %f", p);
     getchar();
     getchar();
     return 0;
 }
 int kar1() {
     std::cout << "Hello World!\n";
     int n, i, soucet = 0, s;
     printf("Zadej hodnotu N ty kare:");
     scanf_s("%d", &n);
     for (i = 1; i <= n; i++)          nevim co to kurva dela
     {
         soucet = soucet + i;
     }
     s = SoucetVzorcem(n);
     printf("Soucet karu od 1 po %d je %d", n, s);
     getchar();
     return 0;
 }
 int trojkar(){
     float d, e, f;
     printf("zadej 2 kary pro pravotrouhel: ");
     scanf_s("%f", &d);
     scanf_s("%f", &e);
     f = sqrt(d * d + e * e);
     printf("prepona karu %5.2f", f);
     getchar();
     getchar();
     return 0;
 }
