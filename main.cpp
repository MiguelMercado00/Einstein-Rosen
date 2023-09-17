//
// Created by Miguel Mercado on 16/09/23.
//

#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include "Cientifico.h"
#include "Evento.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int cantidadNodos = rand() % 20 + 3; // 3 a 22
    ListaDoblementeEnlazada lista;
    Cientifico cientifico;
    Evento evento;
    for (int i = 0; i < cantidadNodos; i++) {
        lista.insertar(cientifico, evento);
    }


    cout << "Total de nodos: " << cantidadNodos << endl;
    lista.print(1, cientifico, evento);

    return 0;
}
