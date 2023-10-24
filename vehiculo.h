#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED
#include <stdio.h>
#include "clasificacion.h"
#include "auto.h"
#include "camioneta.h"
#include "hora.h"
#include "Departamento.h"

typedef struct{
string matricula;
Departamento departamento;
long int cedula;
Hora h;
Clasificacion discriminante;
union{
Auto a;
Camioneta c;
}tipoDato;
}Vehiculo;

//carga los atributos del vehiculo
void cargaVehiculo(Vehiculo &v);

//despliega los atributos del vehiculo
void desplegarVehiculo(Vehiculo v);

//devuelve la matricula del vehiculo
void darMatricula(Vehiculo v, string &aux);

//devuelve el departamento
Departamento darDepartamento(Vehiculo v);

//devuelve la cedula
long int darCedula(Vehiculo v);

//devuelve la hora de entrada
Hora darHoraEntrada(Vehiculo v);

//devuelve la clasificacion del vehiculo
Clasificacion darClasificacion(Vehiculo v);

//Devuelve los atributos del auto. tiene que pertenecer a la categoria auto
Auto darAuto(Vehiculo v);

//devuelve los atributos de la camioneta. tiene que pertenecer a la categoria camioneta
Camioneta darCamioneta(Vehiculo v);

//despliega la hora de entrada
void desplegarHoraEntrada(Vehiculo v);

//despliega la matricula del vehiculo
void desplegarMatricula(Vehiculo v);

//devuelve el rango de hora de entrada
int devolverHH(Vehiculo v);

//devuelve la capacidad de la camioneta
//PRECONDICION tiene que ser una camioneta
int darCapacidadCamioneta(Vehiculo v);

//devuelve el rango de minutos de entrada
int devolverMM(Vehiculo v);

#endif // VEHICULO_H_INCLUDED
