//
// Created by Miguel Mercado on 15/09/23.
//

#include "Nodo.h"
#include <iostream>
#include <string>
using namespace std;
#include "Cientifico.h"
#include "Evento.h"

Nodo::Nodo(int dato, Cientifico cientifico, Evento evento) {
    this->dato = dato;
    this->cientifico = cientifico;
    this->evento = evento;
    this->siguiente = nullptr;
    this->anterior = nullptr;
}
