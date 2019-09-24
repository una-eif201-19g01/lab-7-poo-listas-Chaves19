/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carro.cpp
 * Author: achaq
 * 
 * Created on September 22, 2019, 9:13 PM
 */

#include "Carro.h"

Carro::Carro() {
}

Carro::Carro(std::string id, std::string modelo, int anno, std::string tipo) : Vehiculo(id, modelo, anno, tipo) {
}

Carro::~Carro() {
}

std::string Carro::toString() {
    std::string reporte = "";
    reporte += "Id del vehiculo: " + getId() + "\n"
            "Modelo del vehiculo: " + getModelo() + "\n"
            "Anno del vehiculo: " + std::to_string(getAnno()) + "\n"
            "Tipo del vehiculo: " + getTipo();
    return reporte;

}

