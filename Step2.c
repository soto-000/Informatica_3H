/**
 * @file es_battaglia_navale_step2.c
 * @brief Battaglia Navale - Step 2: Posizionamento casuale della nave sul campo
 * @author Endi Soto Fermin
 * @version 1.0 09/04/25 Versione iniziale
 * 
 * @details
 * OBIETTIVO DELL'ESERCIZIO:
 * Arricchire il programma del Step 1 con la funzionalità di posizionamento casuale
 * di una nave di lunghezza predefinita sul campo di gioco.
 * 
 * ANALISI DEI REQUISITI:
 * 1. Utilizzare un generatore di numeri casuali per posizionare la nave
 * 2. La nave deve avere una lunghezza di 3 caselle (definita come costante)
 * 3. Implementare due modalità di posizionamento: orizzontale e verticale
 * 4. Garantire che la nave sia sempre completamente all'interno del campo
 * 5. Visualizzare il campo con la possibilità di mostrare o nascondere la nave
 * 6. La nave è rappresentata dal carattere '#' nella matrice
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMENSIONE 10
#define LUNGHEZZA_NAVE 3

void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]);

int main() 
{
    char Campo[DIMENSIONE][DIMENSIONE];
    inizializzaCampo(Campo);
    posizionaNave(Campo);
    visualizzaCampo(Campo);
    return 0;
}

/* Implementazione delle funzioni */
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]) 
{
        char n= '~';
        for(int i=0;i<DIMENSIONE;i++)
        { for(int j=0;j<DIMENSIONE;j++)
            { 
                campo[i][j]=n;
            }
         } 
}

void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE])
{   
    printf("    ");
    for (int i=0;i<DIMENSIONE;i++) 
    {
        printf("%d ",i);
    }
    printf("S\n");
        for (int i=0;i<DIMENSIONE;i++) 
        {
            printf("%d | ",i);
                for (int j=0; j<DIMENSIONE;j++)  //disegno lo schema
                { 
                    printf("%c ",campo[i][j]);
                }
                printf("|\n");
        }
}

void posizionaNave(char campo[DIMENSIONE][DIMENSIONE])
{
    srand(time(NULL));
    int verso=rand()%2;
    int p,z;
    if (verso==0)
    {
        p=rand()%DIMENSIONE; 
        z=rand()%(DIMENSIONE - LUNGHEZZA_NAVE+1); 
        for (int i=0;i<LUNGHEZZA_NAVE;i++)
        {
            campo[p][z+i]='#';
        }
    }
    else
    {
        p=rand()%(DIMENSIONE-LUNGHEZZA_NAVE+1);
        z=rand()%DIMENSIONE; 
        for (int i=0;i<LUNGHEZZA_NAVE;i++)
        {
            campo[p+i][z]='#';
        }
    } 

}