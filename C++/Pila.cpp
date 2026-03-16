#include <iostream>
#include <string>
#include "Pila.h"
using namespace std;

Pila::Pila() // Inizializza la pila vuota
{
    top = NULL; // La pila è vuota,il puntatore top è NULL
}

void Pila::push(int valore) // Aggiunge un elemento alla cima della pila
{
    Nodo* newNode = new  Nodo; // Crea un nuovo nodo
    newNode->info = valore; 
    newNode->next = top; 
    top = newNode; 
}

void Pila::pop() // Rimuove l'elemento in cima alla pila
{
    if (top != NULL) // Controlla se la pila non è vuota prima di rimuovere un elemento
    {
        Nodo* temp = top; 
        top = top->next; 
        delete temp; 
    }
}

int Pila::Top() // Restituisce l'elemento in cima alla pila senza rimuoverlo
{
    if (top != NULL) 
    {
        return top->info; // Restituisce il valore del campo info del nodo in cima alla pila
    }
        return 0; // Valore di default se la pila è vuota
    }

bool Pila::isEmpty() // Verifica se la pila è vuota
{
    return top == NULL; 
}

void Pila::print() // Stampa gli elementi della pila dalla cima alla base
{
    Nodo* current = top; // Inizia a stampare dal nodo in cima alla pila
    while (current != NULL) 
    {
        cout << current->info << " "; 
        current = current->next; 
    }
    cout << endl;
}
