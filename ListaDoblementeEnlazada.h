//
// Created by Miguel Mercado on 5/09/23.
//

#ifndef EINSTEIN_ROSEN_LISTADOBLEMENTEENLAZADA_H
#define EINSTEIN_ROSEN_LISTADOBLEMENTEENLAZADA_H
#include "Nodo.h"
#include <iostream>
#include <string>
using namespace std;

class ListaDoblementeEnlazada {
public:
    Nodo *head; // Puntero al inicio de la lista, a la cabeza


    ListaDoblementeEnlazada(); // Constructor

    void insertar(Cientifico cientifico, Evento evento); // Insertar un nodo al inicio de la lista

    void eventos(int dato, Cientifico cientifico, Evento evento); // realizar los eventos y imprimirlos

    void print(int dato, Cientifico cientifico, Evento evento); // Imprimir la lista

private:
    Nodo *primero;
    Nodo *ultimo;

};


#endif //EINSTEIN_ROSEN_LISTADOBLEMENTEENLAZADA_H
