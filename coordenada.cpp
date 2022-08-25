//
// Created by Andres Mendez Solano on 8/25/2022.
//
#include "coordenada.h"

coordenada::coordenada(int xx,int yy) : x(xx), y(yy) {}

coordenada::~coordenada() {

}

int coordenada::getX() const {
    return x;
}

void coordenada::setX(int x) {
    coordenada::x = x;
}

int coordenada::getY() const {
    return y;
}

void coordenada::setY(int y) {
    coordenada::y = y;
}

string coordenada:: toString(){
    stringstream s;
    s<<"Coordenada "<<endl
    <<"X -> "<<this->x<<endl
    <<"Y -> "<<this->y<<endl;

    return s.str();
}
