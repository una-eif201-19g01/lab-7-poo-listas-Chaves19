/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Moto.cpp
 * Author: achaq
 * 
 * Created on September 22, 2019, 9:14 PM
 */

#include "Moto.h"

Moto::Moto() {
}

Moto::Moto(std::string id, std::string modelo, int anno, std::string tipo) : Vehiculo(id, modelo, anno, tipo) {
}

Moto::~Moto() {
}

std::string Moto::toString() {
    std::string reporte = "";
    reporte += "Id del vehiculo: " + getId() + "\n"
            "Modelo del vehiculo: " + getModelo() + "\n"
            "Anno del vehiculo: " + std::to_string(getAnno()) + "\n"
            "Tipo del vehiculo: " + getTipo();
    return reporte;
}