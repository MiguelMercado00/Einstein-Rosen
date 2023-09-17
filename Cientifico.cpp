//
// Created by Miguel Mercado on 15/09/23.
//

#include "Cientifico.h"
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

string Cientifico::CientificoAleatorio() {
    // numero aleatorio entre 1 y 2
    int rando = rand() % 2; // 0 a 1
    if (rando == 0) {
        return "Einstein";
    } else {
        return "Rosen";
    }
}
