//
// Created by Andres Mendez Solano on 8/25/2022.
//
#include "genericArray.h"
template<class tipo, int tam>
genericArray<tipo,tam>::genericArray() {
    vec = new tipo*[tam];
    cant =0;

}

template<class tipo,int tam>
genericArray< tipo,tam>:: ~genericArray(){
    delete[] vec;
}

template<class tipo, int tam>
bool genericArray<tipo,tam>::addObject(tipo* obj){
    if(cant <tam){
        vec[cant++]= obj;
        return true;
    }
    else
        return false;

}

template<class tipo,int tam>
string genericArray< tipo,tam>::toString(){
    stringstream s;
    s<<"Coleccion "<<endl;
    for(int i =0;i<cant;i++){
        s<<vec[i]->toString()<<endl;
    }
    return s.str();
}