#ifndef DEPARTAMENTO_H_INCLUDED
#define DEPARTAMENTO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

typedef enum{ARTIGAS,CANELONES,CERROLARGO,COLONIA,DURAZNO,FLORES,FLORIDA,LAVALLEJA,MALDONADO,MONTEVIDEO,PAYSANDU,RIONEGRO,RIVERA,ROCHA,SALTO,SANJOSE,SORIANO,TACUAREMBO,TREINTAYTRES} Departamento;

//carga el departamento
void cargaDepartamento(Departamento &d);

//despliega la clasificacion del vehiculo
void desplegarDepartamento(Departamento d);

#endif // DEPARTAMENTO_H_INCLUDED
