#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED
#include <stdio.h>
#include "vehiculo.h"

const int N = 50;

typedef struct{
Vehiculo arre [N];
int tope;
}Estacionamiento;

//inicializa el arreglo
void inicializar(Estacionamiento &e);

//Dada una matrícula, determinar si existe algún vehículo ya registrado con esa matrícula
boolean existeVehiculoSegMatricula(Estacionamiento e, string mat);

//Insertar un nuevo vehículo no registrado previamente.
//PRECONDICION: !(lleno(e))
void insertar(Estacionamiento &e, Vehiculo v);

//Dada una matrícula, registrar la partida del vehículo correspondiente
//PRECONDICION: (existeVehiculoSegMatricula(e,aux))
void eliminar(Estacionamiento &e, string mat);

// Devolver la cantidad de autos y la cantidad de camionetas registrados actualmente.
void QautosQcamionetas(Estacionamiento e, int &Qa, int &Qc);

// Dado un departamento, contar el total de vehículos matriculados en ese departamento.
int contarMatriculados(Estacionamiento e, Departamento dep);

//Listar por pantalla matrícula, cédula del conductor y hora de entrada de todos los vehículos registrados
void listarDatos(Estacionamiento e);

//Dada una hora, listar por pantalla matrícula y cédula del conductor
void listarPorHoras(Estacionamiento e, Hora h);

//Dada una capacidad de carga, listar por pantalla matrícula, cédula del conductor y modelo
//PRECONDICION: deben existir camionetas entre los vehiculos
void listarPorCapacidad(Estacionamiento e, int cap);

//Acumula la recaudacion de tickets
//PRECONDICION: (existeVehiculoSegMatricula(e,aux))
void costoTotal(Estacionamiento e, string mat, Hora s, int &ticket);

//controla que quede lugar en el estacionamiento
boolean lleno(Estacionamiento e);

//calcula el costo unitario al momento de partida
//PRECONDICION: (existeVehiculoSegMatricula(e,aux))
int costoUnitario(Estacionamiento e, Hora s,string mat);

//controla que el estacionamiento este sin vehiculos
boolean vacio(Estacionamiento e);

//lista los datos totales de un vehiculo segun una matricula
//PRECONDICION: (existeVehiculoSegMatricula(e,aux))
void listarDatosTotales(Estacionamiento e, string mat);

//controla que la hora de salida sea mayor que la entrada
boolean controlHora (Estacionamiento e,Hora s, string mat);

//devuelve la posicion de un vehiculo en el arreglo segun una matricula
int buscarPosicion(Estacionamiento e, string mat);

#endif // ESTACIONAMIENTO_H_INCLUDED
