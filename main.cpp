#include <stdlib.h>
#include "estacionamiento.h"
#include "menu.h"

int main()
{
    Vehiculo v;
    Estacionamiento e;
    Departamento depto;
    int opcion, qa, qc, cap;
    int ticket = 0;
    string aux, aux2;
    Hora s, h;
    inicializar(e);
    do{
        system("cls");
        printf("\n\nMENU PRINCIPAL");
        mostrarMenuPrincipal(opcion);
        switch (opcion){
            case 1:
                    system("cls");
                    printf("\nRegistar un vehiculo:\n");
                    if(!(lleno(e))){
                        cargaVehiculo(v);
                        insertar(e,v);
                        printf("\nVehiculo registrado correctamente");
                    }else
                        printf("No hay lugar, debera volver mas tarde");
                    break;
            case 2:
                    system("cls");
                    if (!vacio(e)){
                        printf("\nRegistrar la partida de un vehiculo\n");
                        printf("Ingrese la matricula del vehiculo que se retira: ");
                        strCrear(aux);
                        scan(aux);
                        if(existeVehiculoSegMatricula(e,aux)){
                            printf("Ingrese la hora de salida\n");
                            cargaHora(s);
                            if (controlHora(e,s,aux)){
                                printf("El monto del ticket es: $%d", costoUnitario(e,s,aux));
                                costoTotal(e,aux,s,ticket);
                                eliminar(e,aux);
                                printf("\nVehiculo retirado correctamente");
                            }else
                                printf("La hora de salida debe ser posterior a la entrada");
                        }else printf("La matricula no se encontro");

                    }else
                        printf("\nNo hay vehiculos en el estacionamiento.");

                    printf("\n\nPresione enter para continuar.");
                    fflush(stdin);
                    getchar();
                    break;
            case 3:
                    opcion =0;
                    system("cls");
                    do{
                    printf("\n\nMENU DE CONSULTAS Y LISTADOS");
                    mostrarMenuConultas(opcion);
                    switch (opcion){
                        case 1:
                                system("cls");
                                printf("\nTotal recaudado hasta el momento $%d", ticket);
                                break;
                        case 2:
                                system("cls");
                                printf("\nCantidad de autos y camionetas registrados actualmente: \n");
                                QautosQcamionetas(e,qa,qc);
                                printf("%d autos\n", qa);
                                printf("%d camionetas", qc);
                                break;
                        case 3:
                                system("cls");
                                if (vacio(e))
                                    printf("\nNo hay vehiculos en el estacionamiento");
                                else{
                                    printf("\nIngrese un departamento:");
                                    cargaDepartamento(depto);
                                    printf("\nCantidad de vehiculos matriculados en el departamento: ");
                                    desplegarDepartamento(depto);
                                    printf(": %d",contarMatriculados(e,depto));
                                }
                                break;
                        case 4:
                                system("cls");
                                if(vacio(e))
                                    printf("No hay vehiculos en el estacionamiento");
                                else
                                printf("\nListado de vehiculos registrados");
                                printf("\n");
                                listarDatos(e);
                                break;
                        case 5:
                                system("cls");
                                if (!(vacio(e))){
                                    printf("Ingrese una matricula: ");
                                    strCrear(aux2);
                                    scan(aux2);
                                    if(existeVehiculoSegMatricula(e,aux2)){
                                        printf("\nlistado de un vehiculo\n");
                                        listarDatosTotales(e,aux2);
                                    }else printf("No se encontro la matricula");
                                }else printf("No hay vehiculos en el estacionamiento");
                                break;
                        case 6:
                                system("cls");
                                if (!vacio(e)){
                                    printf("Ingrese la hora que desea consultar\n");
                                    cargaHora(h);
                                    printf("\nlistado de vehiculos que entraron en una hora\n");
                                    listarPorHoras(e, h);
                                } else printf("No hay vehiculos en el estacionamiento");
                                break;
                        case 7:
                                system("cls");

                                if (!(vacio(e))){
                                    printf("Ingrese la capacidad de carga que desea consultar: ");
                                    scanf("%d", &cap);
                                    printf("\nlistado de camionetas que superan una capacidad de carga\n");
                                    listarPorCapacidad(e,cap);
                                }else printf("No hay vehiculos en el estacionamiento");
                                break;
                        default:
                                if (opcion !=8)
                                    system("cls");
                                    printf("\nOpcion incorrecta");
                                break;
                    }
                    }while (opcion !=8);
                    break;
            default:
                    if (opcion !=4)
                        printf("\nOpcion incorrecta\n\nPresione enter para continuar");
                        fflush(stdin);
                        getchar();
                    break;
        }
    }while (opcion !=4);

}
