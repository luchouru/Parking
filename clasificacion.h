#ifndef CLASIFICACION_H_INCLUDED
#define CLASIFICACION_H_INCLUDED
#include <stdio.h>
#include "boolean.h"

typedef enum{AUTO, CAMIONETA} Clasificacion;

//carga el tipo de vehiculo
void cargaClasificacion(Clasificacion &c);

//despliega la clasificacion del vehiculo
void desplegarClasificacion(Clasificacion c);

#endif // CLASIFICACION_H_INCLUDED
