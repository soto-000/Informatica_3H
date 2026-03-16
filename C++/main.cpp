#include <iostream>
#include <string>
#include "Pila.h"
#include "Pila.cpp"

using namespace std;

int main()
{
    Pila pila; // Crea un'istanza della classe Pila
    pila.push(10); 
    pila.push(20); 
    pila.push(30);
	cout << "Elementi nella pila: "; 
    pila.print(); // Stampa gli elementi presenti nella pila
    cout << "Elemento in cima alla pila: " << pila.Top() << endl; // Stampa l'elemento in cima alla pila
    pila.pop(); // Rimuove l'elemento in cima alla pila
    cout << "Elementi nella pila dopo pop: "; // Stampa un messaggio 
    pila.print(); // Stampa gli elementi della pila dopo la rimozione
    return 0; 
}