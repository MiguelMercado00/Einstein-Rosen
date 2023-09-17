//
// Created by Miguel Mercado on 15/09/23.
//

#ifndef EINSTEIN_ROSEN_NODO_H
#define EINSTEIN_ROSEN_NODO_H
#include <iostream>
#include <string>
#include "Cientifico.h"
#include "Evento.h"
using namespace std;


class Nodo : public Cientifico, public Evento{
private:// Dato que contiene el nodo
    Cientifico cientifico;
    Evento evento;

public:
    int dato;
    Nodo *siguiente; // Puntero al siguiente nodo
    Nodo *anterior; // Puntero al nodo anterior
    Nodo(int dato, Cientifico cientifico, Evento evento); // Constructor

};


#endif //EINSTEIN_ROSEN_NODO_H
