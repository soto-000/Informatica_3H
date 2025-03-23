#include <stdio.h>
#define N 10
void ordina(int v[]);
void ordina(int v[]) 
{
    int temp;
    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = i + 1; j < N; j++) 
        {
            if (v[i] > v[j]) 
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main() 
{
    int numeri[N] = {9, 2, 7, 4, 3, 6, 5, 1, 8, 10};
    ordina(numeri);
    printf("Array ordinato: ");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", numeri[i]);
    }
    printf("\n");
    return 0;
}
