#ifndef PILA_H
#define PILA_H
#include <iostream>
#include <string>
using namespace std;

struct Nodo // Struttura del nodo della pila
{
    int info; 
    Nodo* next; // Puntatore al nodo successivo nella pila, che rappresenta il nodo sotto l'elemento attuale
};

class Pila // Classe pila
{
    private:
        Nodo* top; // Puntatore al nodo superiore della pila
    public: 

        Pila(); // Inizializza la pila vuota
        void push(int valore); // Aggiunge un elemento alla cima della pila
        void pop(); // Rimuove l'elemento in cima alla pila
        int Top(); // Restituisce l'elemento in cima alla pila senza rimuoverlo
        bool isEmpty(); // Verifica se la pila è vuota
		void print(); // Stampa gli elementi della pila dalla cima alla base

};
#endif 