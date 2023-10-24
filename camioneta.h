#ifndef CAMIONETA_H_INCLUDED
#define CAMIONETA_H_INCLUDED
#include <stdio.h>
#include "string.h"


typedef struct{
string modelo;
int capacidad;
}Camioneta;

//carga los atributos de la camioneta
void cargaCamioneta(Camioneta &c);

//desplega los atributos de la camioneta
void desplegarCamioneta(Camioneta c);

//devuelve el modelo de camioneta
void darModelo(Camioneta c, string &s);

//devuelve la capacidad de la camioneta
int darCapacidad(Camioneta c);

#endif // CAMIONETA_H_INCLUDED
