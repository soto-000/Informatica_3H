#include <stdio.h>
#define N 10

int conta(int v[], int num) 
{
    int cont = 0;
    for (int i = 0; i < N; i++) 
    {
        if (v[i] == num) 
        {
            cont++;
        }
    }
    return cont;
}

int main() 
{
    int numeri[N] = {1, 2, 3, 3, 5, 6, 7, 3, 9, 10};
    int num;
    printf("Inserisci il numero da contare: ");
    scanf("%d", &num);
    printf("Il numero %d appare %d volte\n", num, conta(numeri, num));
    return 0;
}
