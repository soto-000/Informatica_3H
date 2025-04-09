/**
 * @file es_battaglia_navale_step3.c
 * @brief Battaglia Navale - Step 3: Implementazione del meccanismo di sparo
 * @author Endi Soto Tellez Fermin
 * @version 1.0 09/04/25 Versione iniziale
 * 
 * @details
 * OBIETTIVO DELL'ESERCIZIO:
 * Implementare il meccanismo che permette al giocatore di "sparare" a una certa
 * posizione del campo di gioco, verificando se ha colpito la nave o l'acqua.
 * 
 * ANALISI DEI REQUISITI:
 * 1. Consentire all'utente di inserire le coordinate (riga, colonna) per lo sparo
 * 2. Verificare che le coordinate siano valide (all'interno del campo)
 * 3. Verificare che non si spari due volte nella stessa posizione
 * 4. Indicare se il colpo è andato a segno o meno:
 *    - Se colpisce la nave, contrassegnare con 'X' e segnalare un colpo riuscito
 *    - Se colpisce l'acqua, contrassegnare con 'O' e segnalare un colpo mancato
 * 5. Consentire un numero fisso di tentativi (5 per questo step)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMENSIONE 10
#define LUNGHEZZA_NAVE 3

void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]);
int spara(char campo[DIMENSIONE][DIMENSIONE], int riga, int colonna);

int main() 
{
    int tentativi=5;
    int colpiAsegno=0;
    char Campo[DIMENSIONE][DIMENSIONE];
    inizializzaCampo(Campo);
    posizionaNave(Campo);

    while (tentativi>0 && colpiAsegno<LUNGHEZZA_NAVE) 
    {
        visualizzaCampo(Campo);
        int riga, colonna;
        printf("\nTentativi rimasti: %d\n", tentativi);
        printf("Inserisci coordinate (riga colonna): ");
        scanf("%d%d",&riga,&colonna);
        int risultato=spara(Campo,riga,colonna);

        if (risultato==-1) 
        {
            printf("Coordinate non valide o già usate. Riprova.\n");
        } 
        else
        {
            if (risultato == 1) 
            {
                printf("Colpito!\n");
                colpiAsegno++;
                tentativi--;
            } 
            else 
            {
                printf("Acqua \n");
                tentativi--;
            }
       }
    }

    visualizzaCampo(Campo);

    if (colpiAsegno == LUNGHEZZA_NAVE) {
        printf("\nHai affondato la nave!\n");
    } else {
        printf("\nHai finito i tentativi\n");
    }
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

int spara(char campo[DIMENSIONE][DIMENSIONE],int riga,int colonna) 
{
    if (riga < 0 || riga >= DIMENSIONE || colonna < 0 || colonna >= DIMENSIONE) 
    {
        return -1; // coordinate non valide
    }

    if (campo[riga][colonna] == 'X' || campo[riga][colonna] == 'O') 
    {
        return -1; // già colpita
    }

    if (campo[riga][colonna]=='#') 
    {
        campo[riga][colonna]='X'; // colpito
        return 1;
    } 
    else 
    {
        campo[riga][colonna]='O'; // mancato
        return 0;
    }
}