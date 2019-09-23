//
// Created by Alonso Chaves  on 2019-09-16.
//


#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo(const Vehiculo &vehiculo, Nodo *siguiente) : vehiculo(vehiculo), siguiente(siguiente) {}

Nodo::~Nodo() {

}

const Vehiculo &Nodo::getVehiculo() const {
    return vehiculo;
}

void Nodo::setVehiculo(const Vehiculo &vehiculo) {
    Nodo::vehiculo = vehiculo;
}

Nodo *Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente) {
    Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
    return vehiculo->toString();
}