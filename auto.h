#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED
#include <stdio.h>
#include "string.h"

typedef struct{
string marca;
int anio;
}Auto;

//carga los atributos del auto
void cargaAuto(Auto &a);

//desplega los atributos del auto
void desplegarAuto(Auto a);

//devuelve la marca del auto
void darMarca(Auto a, string &s);

//devuelve el año de fabricacion del auto
int darAnio(Auto a);


#endif // AUTO_H_INCLUDED
