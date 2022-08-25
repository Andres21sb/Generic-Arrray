//
// Created by Andres Mendez Solano on 8/25/2022.
//

#ifndef GENERICARRAY_GENERICARRAY_H
#define GENERICARRAY_GENERICARRAY_H

#endif //GENERICARRAY_GENERICARRAY_H

#include <iostream>
#include <sstream>
#include "coordenada.h"

using namespace std;

template<class tipo, int tam>
class genericArray{
private:
    tipo* *vec;
    int cant;
public:
    genericArray() ;
    virtual ~genericArray();

    tipo **getVec() const {
        return vec;
    }

    void setVec(tipo **vec) {
        genericArray::vec = vec;
    }

    int getCant() const {
        return cant;
    }

    bool addObject(tipo* obj);

    void setCant(int cant) {
        genericArray::cant = cant;
    }

    string toString();
};
