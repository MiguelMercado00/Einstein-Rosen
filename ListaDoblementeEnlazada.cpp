//
// Created by Miguel Mercado on 5/09/23.
//

#include "ListaDoblementeEnlazada.h"
#include <iostream>
#include <string>
using namespace std;
#include "Cientifico.h"
#include "Evento.h"
#include <cstdlib>
#include <ctime>


ListaDoblementeEnlazada::ListaDoblementeEnlazada() {
    this->primero = nullptr;
    this->ultimo = nullptr;
}

void ListaDoblementeEnlazada::insertar(Cientifico cientifico, Evento evento) {
    int dato = rand() % 100; // 0 a 99
    Nodo *nuevo = new Nodo(dato, cientifico, evento);
    if (this->primero == nullptr) {
        this->primero = nuevo;
        this->ultimo = nuevo;
    } else {
        this->ultimo->siguiente = nuevo;
        nuevo->anterior = this->ultimo;
        this->ultimo = nuevo;
    }
}



void ListaDoblementeEnlazada::print(int dato, Cientifico cientifico, Evento evento) {
    cout << "[NULL] -> ";

    Nodo *temp = this->primero;
    while (temp != nullptr) {
        cout << "[" << temp->dato << "|" << cientifico.CientificoAleatorio() << "]" << " -> ";
        temp = temp->siguiente;
    }
    cout << "[NULL]" << endl;
}

