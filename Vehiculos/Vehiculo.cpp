/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehiculo.cpp
 * Author: achaq
 * 
 * Created on September 22, 2019, 9:12 PM
 */

#include "Vehiculo.h"

Vehiculo::Vehiculo(): id(" "), modelo(" "), anno(0), tipo(" ") {}

Vehiculo::Vehiculo(std::string id, std::string modelo , int anno, std::string tipo): id(id), modelo(modelo), anno(anno), tipo(tipo){}

Vehiculo::~Vehiculo() {
}

