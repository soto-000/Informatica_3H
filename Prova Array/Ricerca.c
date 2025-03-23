#include <stdio.h>
#define N 10
int ricerca(int v[],int num);

int ricerca(int v[], int num) 
{
    for (int i = 0; i < N; i++) 
    {
        if (v[i] == num) 
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    int numeri[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num;
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &num);
    int indice = ricerca(numeri, num);
    if (indice != -1) 
    {
        printf("Numero trovato in posizione %d\n", indice);
    } 
    else 
    {
        printf("Numero non trovato\n");
    }
    return 0;
}
