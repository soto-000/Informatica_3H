#include <stdio.h>
#define N 10
void carica_array(int voti[N]);
void stampa_array(int voti[N]);
void copia(int v1[],int v2[]);
void copia_pari(int v1[],int v2[]);
int ricerca(int v[],int num);
int conta(int v[],int num);
void ordina(int v[]);
void sposta(int v1[],int v2[]);
int ricerca_sentinella(int v[],int num);

int main()
{
    int v1[N],v2[N],numero,scelta;
    do{
    printf(" ");
    printf("Menu: \n");
    printf("  ");
    printf("1) Funzione Carica\n  2) Funzione Stampa\n  3) Funzione Copia\n  4) Funzione Copia i pari \n  5) Funzione Ricerca\n  6) Funzione Conta\n  7) Funzione Ordina\n  8) Funzione Sposta\n  9) Funzione Ricerca a Sentinella\n  10) Uscire\n");
    printf("inserisci un opzione: ");
    scanf("%d",&scelta);
    switch(scelta){
    case 1:
        carica_array(v1);
        break;
    case 2:
        carica_array(v1);
        stampa_array(v1);
        break;
    case 3:
        carica_array(v1);
        copia(v1,v2);
        stampa_array(v2);
        break;
    case 4: // da rivedere
        carica_array(v1);
        copia_pari(v1,v2);
        stampa_array(v2);
        break;
    case 5:
        carica_array(v1);
        printf("inserisi il numero da cercare: ");
        scanf("%d",&numero);
        printf("Il numero e stato trovato nel indice: %d del Arrey\n",ricerca(v1,numero));
        break;
    case 6:
        carica_array(v1);
        printf("inserisi il numero da contare: ");
        scanf("%d",&numero);
        printf("il numero %d e stato trovato %d volte dentro l arrey\n",numero,conta(v1,numero));
        break;
    case 7:
        carica_array(v1);
        ordina(v1);
        stampa_array(v1);
    break;
    case 8:
        carica_array(v1);
        carica_array(v2);
        sposta(v1,v2);
        stampa_array(v1);
        stampa_array(v2);
        break;
    case 9:
    carica_array(v1);
    printf("inserisi il numero da cercare");
    scanf("%d",&numero);
    printf("Il numero: %d e stato trovato",ricerca(v1,numero));
    break;}
    }while(scelta!=10);
    return 0;
} 

void copia(int v1[],int v2[])
{
    for(int i=0;i<N;i++)
    {
        v1[i] = v2[i];
    }
}

void copia_pari(int v1[],int v2[])
{
    for(int i=0,j=0;i<N;i++)
    {
        if(v1[i]%2==0)
        {
            v2[j]=v1[i];
            j++;
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
        printf("\n");

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

void ordina(int v[])
{
    int i,j,z;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(v[i]>v[j])
            {
                z=v[i];
                v[i]=v[j];
                v[j]=z;
            }
        }
    }
}
 
void sposta(int v1[],int v2[])
{
    for(int i=0,j=N-1;i<N;i++,j--)
    {
        v1[i]=v2[j];
    }
}

int ricerca_sentinella(int v[],int num)
{
    int i=0;v[N]=num;
    while(num!=v[i])
    {
        i++;
    }
    if(i==N)
    {
        return -1;
    }
    return i;
}