//
// Created by Andres Mendez Solano on 8/24/2022.
//

#ifndef GENERICARRAY_COORDENADA_H
#define GENERICARRAY_COORDENADA_H

#endif //GENERICARRAY_COORDENADA_H

#include "Utiles.h"

class coordenada{
private:
    int x;
    int y;
public:
    coordenada(int xx, int yy);

    virtual ~coordenada();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    string  toString();
};