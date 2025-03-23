#include <stdio.h>
#define N 10

void copia_pari(int v1[], int v2[]) 
{
    int j=0;
    for (int i=0;i<N;i++) 
    {
        if (v1[i] % 2 == 0) 
        {
            v2[j] = v1[i];
            j++;
        }
    }
}

int main() {
    int v1[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int v2[N] = {0};
    copia_pari(v1, v2);
    printf("Array con solo numeri pari: ");
    for (int i = 0; i < N; i++) 
    {
        if (v2[i] != 0)
            printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}
