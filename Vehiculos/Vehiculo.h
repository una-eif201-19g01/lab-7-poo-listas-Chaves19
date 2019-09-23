/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehiculo.h
 * Author: achaq
 *
 * Created on September 22, 2019, 9:12 PM
 */

#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo {
private:
    std::string id;
    std::string modelo;
    int anno;
    std::string tipo;
public:
    Vehiculo();
    Vehiculo(std::string, std::string, int, std::string);
    virtual ~Vehiculo();
    virtual std::string toString();
    void setTipo(std::string tipo);
    std::string getTipo();
    void setAnno(int anno);
    int getAnno();
    void setModelo(std::string modelo);
    std::string getModelo();
    void setId(std::string id);
    std::string getId();


};

#endif /* VEHICULOS_H */

