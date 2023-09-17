//
// Created by Miguel Mercado on 15/09/23.
//

#ifndef EINSTEIN_ROSEN_EVENTO_H
#define EINSTEIN_ROSEN_EVENTO_H
#include <iostream>
#include <string>
#include "Cientifico.h"
using namespace std;

class Evento {
public:
    int EventoTipoA(); //Evento de tipo A
    int EventoTipoB(); //Evento de tipo B
    int EventoTipoC(); //Evento de tipo C
};


#endif //EINSTEIN_ROSEN_EVENTO_H


// Evento de tipo A: Es un evento ocurrido en el pasado sólo aparece cuando la variable datos contiene un número primo,
// de lo contrario es un evento normal del pasado. Cuando aparece el evento significa que Einstein ha comenzado su investigación del viaje en el tiempo.

// Evento de tipo B: Es un evento ocurrido en el pasado sólo aparece cuando la variable datos contiene un número primo.
// Esto sólo puede ocurrir si antes se ha presentado un evento y significa que se ha construido la máquina que permite viajar en el tiempo.

// Evento de tipo C: Es un evento ocurrido en el futuro solo aparece cuando la variable datos contiene un número coprimo de datos en el evento A.
// Esto sólo puede ocurrir si antes se ha presentado un evento B y significa que el científico dos Ha viajado al pasado y ha podido al menos observar los eventos B y A.