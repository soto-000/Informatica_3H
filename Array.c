#include <stdio.h>
#define N 10
void copia(int v1[],int v2[]);
void carica_array(int voti[N]);
void stampa_array(int voti[N]);
int ricerca(int v[],int num);
int conta(int v[],int num);

void copia(int v1[],int v2[])
{
    for(int i=0;i<N;i++)
    {
        if(v1[i]%2 == 0)
        {
            v2[i]=v1[i];
        }
        else
        {
            v2[i]=0;
        }
    }
}

void carica_array(int voti[N])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("inserisci un numero: ");
        scanf("%d",&voti[i]);
    }
}

void stampa_array(int voti[N])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d",voti[i]);

    }

}

int ricerca(int v[],int num)
{
    int i;
    for(i=0;i<N;i++)
    {
        if(v[i]==num)
        {
            return i;
        }

    }
    return -1;
}

int conta(int v[],int num)
{
    int i,cont=0;
    for(i=0;i<N;i++)
    {
        if(v[i]==num)
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    int voti[N];
    int i;
    carica_array(voti);
    stampa_array(voti);
    return 0;

}