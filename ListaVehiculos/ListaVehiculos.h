//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_7_LISTAVEHICULOS_H
#define LAB_7_LISTAVEHICULOS_H


#include <ostream>
#include "Nodo.h"

class ListaVehiculos {
    Nodo *primero;
    Nodo *actual;

public:
    ListaVehiculos();

    virtual ~ListaVehiculos();

    void insertarInicio(const Vehiculo& _vehiculo);
    void insertarFinal(const Vehiculo& _vehiculo);
    bool eliminarInicio();
    int totalNodos();
    bool listaVacia();

    Nodo *getPrimero();

    void setPrimero(Nodo *primero);

    Nodo *getActual();

    void setActual(Nodo *actual);

    std::string toString();
};


#endif //LAB_7_LISTAVEHICULOS_H