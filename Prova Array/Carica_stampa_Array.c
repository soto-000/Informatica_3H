#include <stdio.h>
#define N 10
void carica_array(int v[]);
void stampa_array(int voti[]);
int main()
{
    int voti[N];
    carica_array(voti);
    stampa_array(voti);
    return 0;
}

void carica_array(int v[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("inserisci un numero: ");
        scanf("%d",&v[i]);
    }
}

void stampa_array(int voti[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d",voti[i]);

    }

}

