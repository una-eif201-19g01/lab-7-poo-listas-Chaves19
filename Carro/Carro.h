/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carro.h
 * Author: achaq
 *
 * Created on September 22, 2019, 9:13 PM
 */

#ifndef CARRO_H
#define CARRO_H
#include "Vehiculo.h"

class Carro : public Vehiculo {
private:
public:
    Carro();
    Carro(Vehiculo);
    ~Carro();
    std::string toString();


};

#endif /* CARRO_H */

