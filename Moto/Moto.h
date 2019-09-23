/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Moto.h
 * Author: achaq
 *
 * Created on September 22, 2019, 9:14 PM
 */

#ifndef MOTO_H
#define MOTO_H

class Moto : public Vehiculo {
private:
public:
    Moto();
    Moto(Vehiculo);
    ~Moto();
    std::string toString();

};

#endif /* MOTO_H */

