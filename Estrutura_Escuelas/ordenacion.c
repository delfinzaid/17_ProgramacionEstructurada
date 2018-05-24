/*----------------------------------------------------------------*/
/* Autor: Delfino Mendoza Vázquez								  */
/* E-mail: delacua_15@hotmail.com		                          */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/05/2018                                */
/* Descripcion: implementacion de las funciones de ordenacion.    */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int numEscuelas;

int * ordenarAscendente(Escuela listaEscuela[], int arrayTemp[])
{
  for(int i = 0; i < numEscuelas; i++)
  {
    for(int j = i + 1; j < numEscuelas; j++)
    {
      if(strcmp(listaEscuela[arrayTemp[i]].nombre, listaEscuela[arrayTemp[j]].nombre) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Escuela listaEscuela[], int arrayTemp[])
{
  for(int i = 0; i < numEscuelas; i++)
  {
    for(int j = i + 1; j < numEscuelas; j++)
    {
      if(strcmp(listaEscuela[arrayTemp[i]].nombre, listaEscuela[arrayTemp[j]].nombre) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}

