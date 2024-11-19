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
