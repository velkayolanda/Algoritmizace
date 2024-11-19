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
//
//void ukazmatic(int m[5][5]) {
//    for (int r = 0; r < 5; r++) {
//        printf("\n");
//        for (int s = 0; s < 5; s++)
//            printf("    %3d", m[r][s]);
//    }
//}
//void SectiMatice(int m1[5][5], int m2[5][5], int ms[5][5]) {
//    for (int r = 0; r < 5; r++)
//        for (int s = 0; s < 5; s++)
//            ms[r][s] = m1[r][s] + m2[r][s];
//}
//void NahodnaMat(int m[5][5]) {
//    srand((unsigned int)time(NULL));
//    for (int r = 0; r < 5; r++)
//        for (int s = 0; s < 5; s++)
//            m[r][s] = (rand() % 100) + 1;

//}
//int main()
//{
//    int M[5][5], N[5][5], S[5][5];
//    for (int r = 0; r < 5; r++)
//        for (int s = 0; s < 5; s++)
//            if (r == s)
//                M[r][s] = 1;
//            else
//                M[r][s] = 0;
//    ukazmatic(M);
//    printf("\n");
//    for (int r = 0; r < 5; r++)
//        for (int s = 0; s < 5; s++)
//            if (r + s == 4)
//                N[r][s] = 1;
//            else
//                N[r][s] = 0;
//    ukazmatic(N);
//    printf("\n");
//    SectiMatice(M, N, S);
//    ukazmatic(S);
//    printf("\n");
//    NahodnaMat(M);
//    ukazmatic(M);
//    printf("\n");
//    NahodnaMat(N);
//    ukazmatic(N);
//    printf("\n");
//    SectiMatice(M, N, S);
//    ukazmatic(S);
//    printf("\n");
//    
//    int max = S[0][0], maxr = 0, maxs = 0;
//    for (int r=0;r<5;r++)
//        for(int s=0;s<5;s++)
//            if (S[r][s] > max) {
//                max = S[r][s];
//                maxr = r;
//                maxs = s;
//            }
//    printf("\nMaximum he %3d a je na radku %d ve sloupci %d", max, maxr + 1, maxs + 1);
//}

// ----------------------------------------------------------------------------
//  Utorok 15.10.2024
// ----------------------------------------------------------------------------
//void SoucinMatic(int a[5][5], int b[5][5], int v[5][5]) {
//	int k;
//	for(int i=0; i<5;i++)
//		for (int j = 0; j < 5; j++) {
//			v[i][j] = 0;
//			for (k = 0; k < 5; k++)
//				v[i][j] += a[i][k] * b[k][j];
//		}
//}
//int main() {
//
//// skopirovane z predoslej hodiny aby fungovalo co treba
//
//    int M[5][5], N[5][5], S[5][5];
//        for (int r = 0; r < 5; r++)
//            for (int s = 0; s < 5; s++)
//                if (r == s)
//                    M[r][s] = 1;
//                else
//                    M[r][s] = 0;
//        ukazmatic(M);
//        printf("\n");
//        for (int r = 0; r < 5; r++)
//            for (int s = 0; s < 5; s++)
//                if (r + s == 4)
//                    N[r][s] = 1;
//                else
//                    N[r][s] = 0;
//        ukazmatic(N);
//        printf("\n");
//        SectiMatice(M, N, S);
//        ukazmatic(S);
//        printf("\n");
//        NahodnaMat(M);
//        ukazmatic(M);
//        printf("\n");
//        NahodnaMat(N);
//        ukazmatic(N);
//        printf("\n");
//        SectiMatice(M, N, S);
//        ukazmatic(S);
//        printf("\n");
//        
//        int max = S[0][0], maxr = 0, maxs = 0;
//        for (int r=0;r<5;r++)
//            for(int s=0;s<5;s++)
//                if (S[r][s] > max) {
//                    max = S[r][s];
//                    maxr = r;
//                    maxs = s;
//                }
//        printf("\nMaximum he %3d a je na radku %d ve sloupci %d", max, maxr + 1, maxs + 1);
//// 
//// odtialto nove
//// 
//	SoucinMatic(M, N, S);
//	ukazmatic(S);
//	printf("\n");
//}

// ----------------------------------------------------------------------------
//  Streda 16.10.2024
// ----------------------------------------------------------------------------

//int main() {
//    int a, b, soucet, rozdil, soucin, sou_ctvercu;
//    float podil;
//    double odmocnina, sinus, arcus;
//    char operace;
//    printf("Zadej 1. cislo: ");
//    scanf_s("%d", &a);
//    printf("Zadej 2. cislo: ");
//    scanf_s("%d", &b);
//    printf("Mozne sou operace + - * / S A s o");
//    getchar();
//    printf("\nZadej operaci:  ");
//    scanf_s("%c", &operace);
//
//    switch (operace)
//    {
//    case '+':
//        soucet = a + b;
//        printf("Soucet je : %d", soucet);
//        break;
//    case '-':
//        rozdil = a - b;
//        printf("Rozdil je : %d", rozdil);
//        break;
//    case '*':
//        soucin = a * b;
//        printf("Soucin je : %d", soucin);
//        break;
//    case 'S':
//        sinus = sin((double)a*PI/180);
//        printf("Sinus je : %lf", sinus);
//        break;
//    case 'A':
//        arcus = atan((double)a/b) * PI / 180;
//        printf("Arc tangens je : 6.3%lf stupne", arcus);
//        break;
//    case 'o':
//        odmocnina = sqrt((double)a);
//        printf("Odmocnina A je : %lf", odmocnina);
//        break;
//    case 's':
//        sou_ctvercu = a*a+b*b;
//        printf("Soucet ctvercu je : %d", sou_ctvercu);
//        break;
//    case '/':
//        if (b != 0)
//        {
//            podil = (float)a / b;
//            printf("Podil je : %f", podil);
//        }
//        else
//            printf("Nelze delit 0");
//        break;
//    default: printf("neznama oprece");
//    }
//    printf("\n konec");
//    getchar();
//    getchar();
//    return 0;
//}

// ----------------------------------------------------------------------------
//  Piatok 18.10.2024
// ----------------------------------------------------------------------------

//udelat tabulku nasobeni od 1 -> 10 vlastik dal ukol 

//int main() {
//    const int size = 10;
//
//    std::cout << "    ";
//    for (int i = 1; i <= size; ++i) {
//        std::cout << std::setw(4) << i; 
//    }
//    std::cout << "\n";
//
//    for (int i = 1; i <= size; ++i) {
//        std::cout << std::setw(2) << i << " |";
//        for (int j = 1; j <= size; ++j) {
//            std::cout << std::setw(4) << (i * j); 
//        }
//        std::cout << "\n";
//    }
//
//    return 0;
//}

//int JePrvocislo(int c) {
//    int vysledek = 1;
//    for (int delitel = 2; delitel < (c / 2 + 1); delitel++)
//        if (c % delitel == 0)
//            vysledek = 0;
////    return vysledek;
//}
//int main() {
//    int dm, hm;
//    printf("Zadej dolni a horni mezi:   ");
//    scanf_s("%d %d", &dm, &hm);
//    for (int c = dm; c <= hm; c++)
//        if (JePrvocislo(c))
//            printf("%5d ", c);
//    fflush(stdin);
//    getchar();
//    return 0;
//}

//int main()
//{
//    int dm = 1, hm = 1000, pocet,soucet;
//    printf("    interval        pocet\n");
//    for (int od = dm; od < 902; od += 100) {
//        pocet = 0;
//        soucet = 0;
//        printf("%5d - %5d     ", od, od + 99);
//        for (int c = od; c <= od + 99; c++)
//            if (JePrvocislo(c))
//                pocet++;
//        printf("    %d\n", pocet);
//    }
//}

// ----------------------------------------------------------------------------
//  Utorok 22.10.2024
// ----------------------------------------------------------------------------

//typedef struct {
//	int cit, jme;
//	double des;
//}ZLOMEK;
//
//ZLOMEK ZadaniZlomku(void)
//{
//	ZLOMEK v;
//	int pom;
//	printf("Zadejte citatel:	");
//	scanf_s("%d", &pom);
//	v.cit = pom;	fflush(stdin);
//	printf("Zadejte jmenovatel:	");
//	scanf_s("%d", &pom);
//	if (pom == 0) {
//		printf("deleni 0, nastavena 1");
//		pom = 1;
//	}
//	v.jme = pom;	fflush(stdin);
//	v.des = (double)v.cit / v.jme;
//	return v;
//}
//void UkazZlomek(ZLOMEK v) {
//	printf("%2d  \/ %2d		dek.hodnota je %7.3lf\n", v.cit, v.jme);
//}
//ZLOMEK Secti(ZLOMEK a, ZLOMEK b) {
//	ZLOMEK c;
//	c.cit = a.cit * b.jme + a.jme * b.cit;
//	c.jme = a.jme * b.jme;
//	return c;
//}
//ZLOMEK Uprav(ZLOMEK z) {
//	z.des = (double)z.cit / z.jme;
//	return z;
//}
//ZLOMEK odecti(ZLOMEK a, ZLOMEK b) {
//	ZLOMEK c;
//	c.cit = a.cit * b.jme - a.jme * b.cit;
//	c.jme = a.jme * b.jme;
//	return c;
//}
//ZLOMEK Nasobit(ZLOMEK a, ZLOMEK b) {
//	ZLOMEK c;
//	c.cit = a.cit * b.cit;
//	c.jme = a.jme * b.jme;
//	return c;
//}
//ZLOMEK Delit(ZLOMEK a, ZLOMEK b) {
//	ZLOMEK c;
//	c.cit = a.cit * b.jme;
//	c.jme = a.jme * b.cit;
//	return c;
//}
//ZLOMEK ZakladniTvar(double h, double eps) {
//	int c = 1, j = 1;
//	ZLOMEK v;
//	while (abs((double)c / j - h) > eps)
//	{
//		if ((double)c / j > h)
//			j++;
//		else
//			c++;
//	}
//	v.cit = c;
//	v.jme = j;
//	return v;
//}
//int main() {
//	ZLOMEK c1,c2,vysl;
//	c1 = ZadaniZlomku();
//	c2 = ZadaniZlomku();
//	vysl = Secti(c1, c2);
//	vysl = Uprav(vysl);
//	printf("Soucet je: ");
//	UkazZlomek(vysl);
//	vysl = ZakladniTvar(vysl.des, 0.001);
//	printf("Zakl. tvar souctu je: ");
//	UkazZlomek(vysl);
//
//	vysl = odecti(c1, c2);
//	vysl = Uprav(vysl);
//	printf("Rozdil je: ");
//	UkazZlomek(vysl);
//	vysl = ZakladniTvar(vysl.des, 0.001);
//	printf("Zakl. tvar rozdilu je: ");
//	UkazZlomek(vysl);
//
//	vysl = Nasobit(c1, c2);
//	vysl = Uprav(vysl);
//	printf("Soucin je: ");
//	UkazZlomek(vysl);
//	vysl = ZakladniTvar(vysl.des, 0.001);
//	printf("Zakl. tvar soucinu je: ");
//	UkazZlomek(vysl);
//	
//	vysl = Delit(c1, c2);
//	vysl = Uprav(vysl);
//	printf("Podil je: ");
//	UkazZlomek(vysl);
//	vysl = ZakladniTvar(vysl.des, 0.001);
//	printf("Zakl. tvar podilu je: ");
//	UkazZlomek(vysl);
//}

// ----------------------------------------------------------------------------
//  Utorok 29.10.2024
// ----------------------------------------------------------------------------

//typedef struct {
//	int km, litru;
//	double spotreba;
//	double spotUS;
//	char znacka[21];
//} AUTO;
//
//AUTO ZadaniDat(void) {
//	AUTO v;
//	int pom;
//	char zn[21];
//	printf("Zadejte pocet ujetych km:	");
//	scanf_s("%d", &pom);
//	v.km = pom;
//	// fflush(stdin); // Not needed and can cause undefined behavior
//	printf("Zadejte pocet projetych litru:	");
//	scanf_s("%d", &pom);
//	v.litru = pom;
//	// fflush(stdin); // Not needed
//	printf("Zadejte znacku vozidla:	");
//	scanf_s("%s", zn, (unsigned)_countof(zn)); // Added size limit to prevent buffer overflow
//	strcpy_s(v.znacka, zn);
//	// fflush(stdin); // Not needed
//	return v;
//}
//
//AUTO VypocetSpotreby(AUTO a) {
//	a.spotreba = (double)a.litru * 100 / a.km;			 //litru na 100 km
//	a.spotUS = (100 / 1.6) / (a.spotreba / 3.87);		 // mile na gallon
//	return a;
//}
//
//void UkazAuto(AUTO v) {
//	printf("\nUdaje pro vozidlo: %s\n", v.znacka);
//	printf("UJETO	km: %4d\n", v.km);
//	printf("Projeto litru: %4d\n", v.litru); // Corrected to %4d for proper formatting
//	printf("Odpovida spotrebe: %5.2lf l/100km\n", v.spotreba);
//	printf("Spotreba US cini: %5.2lf mil/gallon\n", v.spotUS);
//}
//AUTO VstupDAT(int km, int litru) {
//	AUTO v;
//	v.km = km;
//	v.litru = litru;
//	return v;
//}
//
//int main(int litru) {
//	AUTO auticko;
//	auticko = ZadaniDat();
//	auticko = VypocetSpotreby(auticko);
//	UkazAuto(auticko);
//	// fflush(stdin); // Not needed
//	getchar(); // Wait for user input before exiting
//	
//	AUTO a;
//	printf("\nlitru    ");
//	for (int i = 100; i < 901; i += 100)
//		printf("%7d ", i);
//	printf("\nUjeto km ");
//	for (int litru = 10; litru < 91; litru += 10)
//		printf("%6d  ", litru);
//	printf("\nSpotreba ");
//	for (int km = 100; km < 901; km += 100)
//	{
//		a = VstupDAT(km, litru);
//		a = VypocetSpotreby(a);
//		printf("%7.2lf ", a.spotreba);
//	}
//	printf("\n");
//	getchar();
//	return 0;
//}

// ukol heheh

//void calcCurrency(int amount) {
//    vector<int> money = { 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
//    vector<int> count(money.size(), 0);
//
//    cout << "Zadej pozadovanou castku: " << amount << endl;
//
//    for (int i = 0; i < money.size(); ++i) {
//        if (amount >= money[i]) {
//            count[i] = amount / money[i];
//            amount = amount % money[i];
//            cout << "hledame pocet " << money[i] << " Kc"
//                << "\tpotrebujeme " << count[i] << " kusu"
//                << "\tzbyva zaplatit: " << amount << " Kc" << endl;
//        }
//    }
//    cout << endl;
//    for (int i = 0; i < money.size(); ++i) {
//        if (count[i] > 0) {
//            cout << money[i] << " Kc bude " << count[i] << " krat" << endl;
//        }
//    }
//}
//
//int main() {
//    int amount;
//    cout << "Zadejte pozadovanou castku: ";
//    cin >> amount;
//    calcCurrency(amount);
//    return 0;
//}

// ----------------------------------------------------------------------------
//  Streda 30.10.2024
// ----------------------------------------------------------------------------

//void SoucetCasu(int h1, int m1, int s1, int h2, int m2, int s2, int* vh, int* vm, int* vs)
//{
//	int h = 0, m = 0, s = 0;
//	s = s1 + s2;
//	if (s > 59)
//	{
//		m += 1;
//		s -= 60;
//	}
//	m = m + m1 + m2;
//	if (m > 59) {
//		h += 1;
//		m -= 60;
//	}
//	*vh = h + h1 + h2;
//	*vm = m;
//	*vs = s;
//}
//void RozdilCasu(int h1, int m1, int s1, int h2, int m2, int s2, int* vh, int* vm, int* vs) {
//	int sekundy1, sekundy2,vysledne_sekundy;
//	sekundy1 = s1 + m1 * 60 + h1 * 3600;
//	sekundy2 = s2 + m2 * 60 + h2 * 3600;
//	if (sekundy1 > sekundy2) {
//		vysledne_sekundy = sekundy1 - sekundy2;
//	}
//	else {
//		vysledne_sekundy = sekundy2 - sekundy1;
//	}
//	*vh = vysledne_sekundy / 3600;
//	vysledne_sekundy -= *vh*3600;
//	*vm = vysledne_sekundy / 60;
//	*vs = vysledne_sekundy -= *vm * 60;
//}
//int main() {
//	int h, m, s, h1, m1, s1, h2, m2, s2;
//	cout << "Zadejte 1. cas h m s:	";
//	cin >> h1 >> m1 >> s1;
//	cout << "Zadejte 2.cas h m s: ";
//	cin >> h2 >> m2 >> s2;
//	SoucetCasu(h1, m1, s1, h2, m2, s2, &h, &m, &s);
//	cout << "Soucet casu je:" << "\t" << h << "\t" << m << "\t" << s;
//	RozdilCasu(h1, m1, s1, h2, m2, s2,&h,&m,&s);
//	cout << "\nRozdil casu je:" << "\t" << h << "\t" << m << "\t" << s;
//}

// ----------------------------------------------------------------------------
//  Streda 30.10.2024
// ----------------------------------------------------------------------------

//void VstupPole(int p[8], int od, int po) {
//	int vstup;
//	for (int i = 1; i < 9; i++) {
//		cout << "Zadej " << i << ". znamku:";
//		cin >> vstup;
//		while (vstup<od || vstup >po) {
//			cout << "Zadej " << i << ". znamku znovu:";
//			cin >> vstup;
//		}
//		p[i - 1] = vstup;
//	}
//}
//void UkazPole(int p[8]) {
//	for (int i = 0; i < 8; i++) {
//		cout << i << "\t";
//	}
//}
//int MinZnamka(int p[8]) {
//	int min = p[0];
//	for (int i = 1; i < 8; i++)
//		if (p[i] < min)
//			min = p[i];
//	return min;
//}
//int MaxZnamka(int p[8]) {
//	int max = p[0];
//	for (int i = 1; i < 8; i++)
//		if (p[i] > max)
//			max= p[i];
//	return max;
//}
//int main() {
//	int zn[8];
//	int minimum, maximum, soucet = 0;
//	double hodnoceni;
//	VstupPole(zn, 60, 100);
//	UkazPole(zn);
//	minimum = MinZnamka(zn);
//	maximum = MaxZnamka(zn);
//	cout << "\nSkrtame " << minimum << " a " << maximum << "\n";
//	for (int i = 0; i < 8; i++) {
//		soucet += zn[i];
//	}
//	soucet = soucet - minimum - maximum;
//	hodnoceni = soucet / 6.0;
//	cout << "Vysledna znamka je  " << hodnoceni;
//	return 0;
//}

//float PlatbaTaxi(float km) {
//	float cena;
//	if (km < 20.0)
//		cena = 45 + km * 25;
//	else if (km < 40.0)
//		cena = 45 + 19*25+ (km-19) * 23;
//	else if (km < 40.0)
//		cena = 45 + 19 * 25 + (km - 39) * 23;
//	else if (km < 60.0)
//		cena = 45 + 19 * 25 + (km - 59) * 20;
//	else
//		cena = 45 + 19 * 25 + (km - 19) * 23;
//}

// udelat fibbonacciho postupnost

//void fibonacci(int n) {
//    int a = 0, b = 1, dalsi_cislo;
//
//    cout << "Fibonacci Postupnost: " << a << " " << b << " ";
//    for (int i = 2; i < n; i++) {
//        dalsi_cislo = a + b;
//        cout << dalsi_cislo << " ";
//        a = b;
//        b = dalsi_cislo;
//    }
//    cout << endl;
//}
//
//int main() {
//    int n;
//    cout << "Zadejte pocet cisel v postupnosti: ";
//    cin >> n;
//    fibonacci(n);
//    return 0;
//}

// ----------------------------------------------------------------------------
//  Utorok 12.11.2024
// ----------------------------------------------------------------------------

//void TiskHviezdicek(int pocet) {
//	for (int i = 0; i < pocet; i++)
//		cout << "*";
//	cout << "\n";
//}
//
//int main() {
//	int cisla[100], cetnosti[10] = { 0 };
//	int nc, index;
//
//	srand(static_cast<unsigned int>(time(NULL)));
//
//	for (int i = 0; i < 100; i++) {
//		nc = rand() % 100;
//		index = nc / 10;
//		cetnosti[index]++;
//	}
//
//	for (int j = 0; j < 10; j++) {
//		cout << 10 * j << " - " << 10 * j + 9 << "\t";
//		cout << cetnosti[j] << "\t";
//		TiskHviezdicek(cetnosti[j]); 
//	}
//
//	getchar();
//	return 0;
//}
//
//class Vyplata {
//private: 
//	int tarif, osobni, hrube, zdrav, soc, zaklad, slevadane, pocdeti, dan, ciste;
//public:
//	Vyplata(int ta, int os, int pd) {
//		tarif = ta;
//		osobni = os;
//		pocdeti = pd;
//		this->Vypocet();
//	}
//	void Vypocet() {
//		hrube = tarif + osobni;
//		zdrav = (hrube * 0.045);
//		soc = hrube * 0.065;
//		zaklad = hrube;
//		if (hrube % 100 != 0) {
//			zaklad = 100 * (hrube / 100 + 1);
//		}
//		slevadane = 2570;
//		switch (pocdeti) {
//		case 0: slevadane = slevadane; break;
//		case 1: slevadane += 1267; break;
//		case 2: slevadane += 3127; break;
//		case 3: slevadane += 5447; break;
//		case 4: slevadane += 7767; break;
//		case 5: slevadane += 10087;
//		}
//		dan = zaklad * 0.15;
//		dan = dan - slevadane;
//		if (dan < 0)
//			dan = 0;
//		ciste = hrube - zdrav - soc - dan;
//	}
//	int Thrube() { return hrube; }
//	int Tsoc() { return soc; }
//	int Tzdrav() { return zdrav; }
//	int Tciste() { return ciste; }
//	int Tdan() { return dan; }
//
//};
//int main() {
//	int Hrube, Pocdeti, Tarif, Osobni;
//	cout << "Zadejte platovy tarif: ";
//	cin >> Tarif;
//	cout << "\nZadejte osobni priplatek: ";
//	cin >> Osobni;
//	cout << "\nZadejte pocet deti: ";
//	cin >> Pocdeti;
//	class Vyplata PETR(Tarif, Osobni, Pocdeti);
//	cout << "Hrube:" << PETR.Thrube() << "\nSocialni:" << PETR.Tsoc() << "\nZdravotni:" << PETR.Tzdrav() << "\nDan:" << PETR.Tdan() << "\nCiste:" << PETR.Tciste();
//	return 0;
//}

// ----------------------------------------------------------------------------
//  Štvrtok 14.11.2024
// ----------------------------------------------------------------------------

//class MatOper {
//private: float oper1, oper2, vysledek;
//	   char operace;
//public:
//	MatOper(float, float, char);
//	void Vypocet();
//	void UkazOperandy();
//	void UkazVysledek();
//	void NastavOperaci(char o);
//};
//double faktorial(int n) {
//	double f = 1;
//	for (int i = 2; i <= n; i++)
//		f *= i;
//	return f;
//}
//double kombinace(int n, int k) {
//	double v;
//	v = faktorial(n) / faktorial(k) / faktorial(n - k);
//	return v;
//}
//void MatOper::NastavOperaci(char o) {
//	operace = o;
//}
//void MatOper::UkazVysledek() {
//	cout << "Vysledek:\t" << vysledek << endl;
//	}
//void MatOper::UkazOperandy() {
//	cout << "Operandy:\t" << oper1 << "\t" << oper2 << endl;
//}
//void MatOper::Vypocet() {
//	switch (operace) {
//
//	case '+': vysledek = oper1 + oper2; break;
//	case '-': vysledek = oper1 - oper2; break;
//	case '*': vysledek = oper1 * oper2; break;
//	case '/': if (oper2 != 0)
//		vysledek = oper1 / oper2;
//			else {
//		cout << "nelze delit 0";
//		vysledek = 999999;
//	}
//			break;
//	case '2': vysledek = oper1 * oper1; break;
//	case '3': vysledek = oper1 * oper1 * oper1; break;
//	case 's': vysledek = (float)sin((double)oper1 * 3.141592 / 180); break;
//	case 'c': vysledek = (float)cos((double)oper1 * 3.141592 / 180); break;
//	case 'a': vysledek = (float)atan((double)oper1 / oper2) * 180 / 3.141592; break;
//	case 'm': vysledek = (float)sqrt(oper1 * oper1 + oper2 * oper2); break;
//	case 'f': vysledek = (float)faktorial((int)oper1); break;
//	case 'k': vysledek = (float)kombinace(oper1, oper2); break;
//	case 't': vysledek = (float)tan((double)oper1 * 3.141592 / 180); break;
//	case 'o': vysledek = (float)pow((double)oper1, (double)oper2); break;
//	case 'd': vysledek = (float)sqrt((double)oper1);
//	}
//}
//MatOper::MatOper(float o1, float o2, char op) {
//	oper1 = o1; oper2 = o2; operace = op;
//}
//int main() {
//	/*class MatOper a(2, 16, 'o');
//	
//	a.Vypocet();
//	a.UkazOperandy();
//	a.UkazVysledek();
//
//	a.NastavOperaci('/');
//	a.Vypocet();
//	a.UkazVysledek();
//
//	a.NastavOperaci('*');
//	a.Vypocet();
//	a.UkazVysledek();
//
//	a.NastavOperaci('d');
//	a.Vypocet();
//	a.UkazVysledek();*/
//	float cislo1, cislo2;
//	char zadejoperaci;
//	cout << "Zadej prvni operand: ";
//	cin >> cislo1;
//	cout << "Zadej druhy operand: ";
//	cin >> cislo2;
//	cout << "Zadej operaci z vyberu (+ -  * / 2 3 s c a m f k t o d): " << endl;
//	cin >> zadejoperaci;
//	class MatOper a(cislo1, cislo2, zadejoperaci);
//	a.Vypocet();
//	a.UkazOperandy();
//	a.UkazVysledek();
//
//	getchar(); return 0;
//}

// ----------------------------------------------------------------------------
//  Piatok 15.11.2024
// ----------------------------------------------------------------------------

//class Faktura {
//private:
//	char Predmet[50];
//	float CenaKusBezDPH;
//	int DPH;
//	int PocetKusu;
//	float CenaKusDPH;
//	float CenaCelkemDPH;
//	static float FakturaCelkem;
//public:
//	Faktura(const char* Zbozi, float cbDPH, int dph, int pk) {
//		strcpy_s(Predmet, Zbozi);
//		CenaKusBezDPH = cbDPH;
//		DPH = dph;
//		PocetKusu = pk;
//	}
//	void VypoCenuCelkem() {
//		CenaCelkemDPH = CenaKusBezDPH * (1 + (float)DPH / 100) * PocetKusu;
//		FakturaCelkem += CenaCelkemDPH;
//	}
//	void VypoCenuKusDPH(){
//		CenaKusDPH = CenaKusBezDPH * (1 + (float)DPH / 100);
//	}
//	float VratCenuCelkem() {
//		return FakturaCelkem;
//	}
//	float UkazCenuCelkem() {
//		return CenaCelkemDPH;
//	}
//	void UkazCenuCelkem2() {
//		cout << "Cena za " << PocetKusu << " kusu " << Predmet << " je celkem\t"<< CenaCelkemDPH <<" Kc" << endl;
//	}
//	void NastavKusy(int pocet) {
//		PocetKusu = pocet;
//	}
//	void ZmenaDPH(int newDPH) {
//		DPH = newDPH;
//	}
//	void Prepocitat() {
//		CenaCelkemDPH = CenaKusBezDPH * (1 + (float)DPH / 100) * PocetKusu;
//	}
//
//};
//float Faktura::FakturaCelkem = 0;
//int main() {
//	class Faktura F1("Pracka", 12990.00, 21, 3);
//	class Faktura F2("Hi-Fi vez", 7580.00, 21, 6);
//	class Faktura F3("Nosice CD", 125.00, 10, 15);
//	F1.VypoCenuCelkem();
//	F2.VypoCenuCelkem();
//	F3.VypoCenuCelkem();
//	F1.UkazCenuCelkem2();
//	F2.UkazCenuCelkem2();
//	F3.UkazCenuCelkem2();
//	cout << "Celkova cena:\t" << F1.VratCenuCelkem() <<" Kc" << endl;
//	
//	F3.ZmenaDPH(21);
//	F3.Prepocitat();
//	cout << "Cena treti faktury po prepocitani je: " << F3.UkazCenuCelkem() << "Kc"<<endl;
//	F3.UkazCenuCelkem2();
//	F2.NastavKusy(7);
//	F2.Prepocitat();
//	cout << "Cena druhe faktury je po prepocitani:\t" << F2.UkazCenuCelkem() << " Kc" << endl;
//	F2.UkazCenuCelkem2();
//	cout << "Celkova cena nakupu je:\t" << F1.UkazCenuCelkem() + F2.UkazCenuCelkem() + F3.UkazCenuCelkem() << " Kc" << endl;
//	getchar();
//	return 0;
//}

//class komplexni_cislo {
//private:
//	double realna_cast, imag_cast;
//	double modul;
//public:
//	double rc();
//	double ic();
//	double m();
//	komplexni_cislo(double r, double i);
//	komplexni_cislo(double r);
//	void nastav_hodnotu(double x, double y);
//	void vypoctimodul();
//	komplexni_cislo operator+(komplexni_cislo y);
//	komplexni_cislo operator-(komplexni_cislo y);
//	komplexni_cislo operator*(komplexni_cislo y);
//	komplexni_cislo operator/(komplexni_cislo y);
//	void UkazSe();
//};
//int main() {
//	class komplexni_cislo a(8, 1);
//	class komplexni_cislo b(4, -2);
//	class komplexni_cislo c(0);
//
//	a.vypoctimodul();
//	b.vypoctimodul();
//	c = a / b;
//	c.vypoctimodul();
//	a.UkazSe();
//	b.UkazSe();
//	c.UkazSe();
//	getchar();
//	return 0;
//}
//
//komplexni_cislo komplexni_cislo::operator/(komplexni_cislo y)
//{
//	komplexni_cislo vysledek(0, 0);
//	double rc, ic, jme;
//	jme = y.realna_cast * y.realna_cast + y.imag_cast * y.imag_cast;
//	rc = (realna_cast * y.realna_cast + imag_cast * y.imag_cast) / jme;
//	ic = (imag_cast * y.realna_cast - realna_cast * y.imag_cast) / jme;
//	vysledek.nastav_hodnotu(rc, ic);
//	return vysledek;
//}
//komplexni_cislo komplexni_cislo::operator*(komplexni_cislo y)
//{
//	komplexni_cislo vysledek(0, 0);
//	vysledek.nastav_hodnotu(realna_cast * y.realna_cast - imag_cast * y.imag_cast, realna_cast * y.imag_cast + y.realna_cast * imag_cast);
//	return vysledek;
//}
//komplexni_cislo komplexni_cislo::operator+(komplexni_cislo y)
//{
//	komplexni_cislo vysledek(0, 0);
//	vysledek.nastav_hodnotu(realna_cast + y.realna_cast, imag_cast + y.imag_cast);
//	return vysledek;
//}
//komplexni_cislo komplexni_cislo::operator-(komplexni_cislo y)
//{
//	komplexni_cislo vysledek(0, 0);
//	vysledek.nastav_hodnotu(realna_cast - y.realna_cast, imag_cast - y.imag_cast);
//	return vysledek;
//}
//void komplexni_cislo::nastav_hodnotu(double x, double y) {
//	realna_cast = x;
//	imag_cast = y;
//	}
//komplexni_cislo::komplexni_cislo(double r) {
//	realna_cast = r;
//	imag_cast = 0;
//}
//void komplexni_cislo::UkazSe() {
//	cout << "\nRealna cast je " << realna_cast << endl;
//	cout << "\nImaginarni cast je " << imag_cast << endl;
//	cout << "\nModul je " << modul << endl;
//}
//komplexni_cislo::komplexni_cislo(double r, double i) {
//	realna_cast = r;
//	imag_cast = i;
//}
//void komplexni_cislo::vypoctimodul() {
//	modul = sqrt(realna_cast * realna_cast + imag_cast * imag_cast);
//}

// ----------------------------------------------------------------------------
//  Utorok 19.11.2024
// ----------------------------------------------------------------------------
// resil code z minula, protoze Jaegermeister delal drama.

class Vozidla {
public:
    string Znacka;
    string Typ;
    string Kategorie;
    int Objem;
    string TypMotoru;
    string RegZnacka;
    int RokVyroby;
    float spotreba;

    float UkazSpotrebu() { return spotreba; }
    int UkazObjem() { return Objem; }
    string UkazZnacku() { return Znacka; }
    string UkazTypVoz() { return Typ; }
    int UkazRokVyroby() { return RokVyroby; }
    void Nastavit(string Z, string T, string K, int Ob, string Typm, string Reg, int R, float s) {
        Znacka = Z;
        Typ = T;
        Kategorie = K;
        Objem = Ob;
        TypMotoru = Typm;
        RegZnacka = Reg;
        RokVyroby = R;
        spotreba = s;
    }
    int VekVozidla() {
        time_t now = time(0);
        tm gmtm;
        gmtime_s(&gmtm, &now);
        int aktrok = gmtm.tm_year + 1900;
        return aktrok - RokVyroby; 
    }
    string UkazTyp() { return TypMotoru; }
};

void UkazCas() {
    time_t now = time(0);
    tm gmtm;
    gmtime_s(&gmtm, &now);
    cout << "\n" << "Rok: " << 1900 + gmtm.tm_year << endl;
    cout << "Mesic: " << 1 + gmtm.tm_mon << endl;
    cout << "Den: " << gmtm.tm_mday << endl;
    cout << "Cas: " << 1 + gmtm.tm_hour << ":" << gmtm.tm_min << ":" << gmtm.tm_sec << endl;
}

int main() {
    class Vozidla* A = new Vozidla[6];
    A[0].Nastavit("Skoda", "Superb", "O", 1996, "N", "2BL1524", 2013, 6.5);
    A[1].Nastavit("Audi", "A6", "O", 1998, "N", "1BL1524", 2014, 7.2);
    A[2].Nastavit("BMW", "320d", "O", 2290, "N", "3BL1524", 2017, 5.9);
    A[3].Nastavit("Ford", "Mondeo", "O", 1996, "B", "6BL1524", 2018, 8.3);
    A[4].Nastavit("Kia", "Sorento", "O", 1997, "B", "5BL1524", 2017, 9.1);
    A[5].Nastavit("Hyundai", "Tucson", "O", 1993, "N", "4BL1524", 2014, 6.7);

    int maxObjem = A[0].UkazObjem();
    for (int i = 1; i < 6; i++) {
        if (A[i].UkazObjem() > maxObjem) {
            maxObjem = A[i].UkazObjem();
        }
    }
    cout << "Max objem je: " << maxObjem << " ccm u techto vozidel:" << endl;
    for (int i = 0; i < 6; i++) {
        if (A[i].UkazObjem() == maxObjem) {
            cout << A[i].UkazZnacku() << "\t" << A[i].UkazTypVoz() << endl;
        }
    }

    float prumer = 0;
    for (int i = 0; i < 6; i++) {
        prumer += A[i].VekVozidla();
    }
    prumer = prumer / 6;
    cout << "Prumer stari vsech vozidel je: " << prumer << endl;

    int maxvek = A[0].VekVozidla();
    for (int i = 1; i < 6; i++) {
        if (A[i].VekVozidla() > maxvek)
            maxvek = A[i].VekVozidla();
    }
    cout << "Nejstarsi auto ma: " << maxvek << " let" << endl;

    for (int i = 0; i < 6; i++) { 
        if (A[i].VekVozidla() == maxvek) {
            cout << A[i].UkazZnacku() << "\t" << A[i].UkazTypVoz() << endl;
        }
    }

    int pocetn = 0;
    for (int i = 0; i < 6; i++) {
        if (A[i].UkazTyp() == "N") {
            pocetn++;
        }
    }
    cout << "Pocet naftovych vozu je: " << pocetn << endl;

    int pocetb = 0;
    for (int i = 0; i < 6; i++) {
        if (A[i].UkazTyp() == "B") {
            pocetb++;
        }
    }
    cout << "Pocet benzinovych vozu je: " << pocetb << endl;

    float nejmensi_spotreba_benzin = FLT_MAX;
    for (int i = 0; i < 6; i++) {
        if (A[i].UkazTyp() == "B") {
            if (A[i].spotreba < nejmensi_spotreba_benzin) {
                nejmensi_spotreba_benzin = A[i].spotreba;
            }
        }
    }
    cout << "Nejmensi spotreba mezi benzinovymi vozy je: " << nejmensi_spotreba_benzin << " l/100km" << endl;
    for (int i = 0; i < 6; i++) {
        if (A[i].spotreba == nejmensi_spotreba_benzin) {
            cout <<"A je to: " << A[i].UkazZnacku() << "\t" << A[i].UkazTypVoz() << endl;
        }
    }

    float nejmensi_spotreba_nafta = FLT_MAX;
    for (int i = 0; i < 6; i++) {
        if (A[i].UkazTyp() == "N") {
            if (A[i].spotreba < nejmensi_spotreba_nafta) {
                nejmensi_spotreba_nafta = A[i].spotreba;
            }
        }
    }
    cout << "Nejmensi spotreba mezi nafta vozy je: " << nejmensi_spotreba_nafta << " l/100km" << endl;
    for (int i = 0; i < 6; i++) {
        if (A[i].spotreba == nejmensi_spotreba_nafta) {
            cout << "A je to: " << A[i].UkazZnacku() << "\t" << A[i].UkazTypVoz() << endl;
        }
    }


    delete[] A;
    return 0;
}
