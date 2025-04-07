/**
 * @file es_battaglia_navale_step1.c
 * @brief Battaglia Navale - Step 1: Inizializzazione e visualizzazione del campo di gioco
 * @author Endi Soto Fermin
 * @version 1.0 01/04/25 Versione iniziale
 * 
 * @details
 * OBIETTIVO DELL'ESERCIZIO:
 * Creare la struttura base del gioco Battaglia Navale, implementando le funzioni
 * necessarie per inizializzare e visualizzare il campo di gioco.
 * 
 * ANALISI DEI REQUISITI:
 * 1. Creare una matrice di dimensione 5x5 per rappresentare il campo di gioco
 * 2. Inizializzare la matrice con il carattere '~' che rappresenta l'acqua
 * 3. Visualizzare il campo di gioco con indici di riga e colonna
 * 4. Utilizzare una struttura modulare con funzioni separate per inizializzazione e visualizzazione
 */
#include <stdio.h>
#define DIMENSIONE 7
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
int main() 
{
    char Campo[DIMENSIONE][DIMENSIONE];
    inizializzaCampo(Campo);
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
    printf("\n");
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