#include <stdio.h>
#define N 10
void copia(int v1[], int v2[]);

void copia(int v1[], int v2[])
{
    for (int i = 0; i < N; i++) 
    {
        if (v1[i] % 2 == 0) 
        {
            v2[i] = v1[i];
        } 
        else 
        {
            v2[i] = 0;
        }
    }
}

int main() 
{
    int v1[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int v2[N] = {0};
    copia(v1, v2);
    printf("Array copiato (solo pari): ");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", v2[i]);
    }
    printf("\n");
    return 0;
}
