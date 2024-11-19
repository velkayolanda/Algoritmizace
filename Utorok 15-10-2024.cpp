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
//  Utorok 15.10.2024
// ----------------------------------------------------------------------------
void SoucinMatic(int a[5][5], int b[5][5], int v[5][5]) {
	int k;
	for(int i=0; i<5;i++)
		for (int j = 0; j < 5; j++) {
			v[i][j] = 0;
			for (k = 0; k < 5; k++)
				v[i][j] += a[i][k] * b[k][j];
		}
}
int main() {

// skopirovane z predoslej hodiny aby fungovalo co treba

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
// 
// odtialto nove
// 
	SoucinMatic(M, N, S);
	ukazmatic(S);
	printf("\n");
}
