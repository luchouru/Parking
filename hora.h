#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include <stdio.h>
#include "boolean.h"

typedef struct{
int hh;
int mm;
}Hora;

//carga la hora de entrada
void cargaHora(Hora &h);

//desplega la hora de entrada
void desplegarHora(Hora h);

//devuelve la hora
int darHora(Hora h);

//devuelve los minutos
int darMinutos(Hora h);

#endif // HORA_H_INCLUDED
