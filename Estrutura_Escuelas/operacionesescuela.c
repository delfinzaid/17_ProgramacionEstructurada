/*----------------------------------------------------------------*/
/* Autor: Delfino Mendoza Vázquez								  */
/* E-mail: delacua_15@hotmail.com		                          */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/05/2018                                */
/* Descripcion: implementacion de funciones sobre la estructura   */
/*              Escuela: crear, listar, ordenar, buscar,          */
/*              actualizar y eliminar.                            */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int numEscuelas;



Escuela crearNuevaEscuela(void)
{
	Escuela escuela;

	printf(_TBLANCO _NEGRITA "Introduce el nombre de la escuela: " _NNEGRITA _TVERDE);
	fgets(escuela.nombre, TAM_NOM, stdin);		/* Solicita el nombre de la escuela al usuario          */
	strcpy(escuela.nombre, strtok(escuela.nombre, "\n"));	/* Elimina el salto de linea '\n' que genera fgets() */


	printf(_TBLANCO _NEGRITA "Introduce la clave de la escuela: " _NNEGRITA _TVERDE);
	fgets(escuela.clave, TAM_CLAVE, stdin);		/* Solicita la clave de la escuela al usuario        */
	strcpy(escuela.clave, strtok(escuela.clave, "\n"));	/* Elimina el salto de linea '\n' que genera fgets() */

	printf(_TBLANCO _NEGRITA "Introduce el turno de trabajo de la escuela: " _NNEGRITA _TVERDE);
	fgets(escuela.turno, TAM_TURNO, stdin);		/* Solicita la el turno de trabajo de la escuela al usuario        */
	strcpy(escuela.turno, strtok(escuela.turno, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */
	
	

	printf(_TBLANCO _NEGRITA "Introduce el teléfono de la escuela: " _NNEGRITA _TVERDE);
	scanf("%d", &escuela.telefono);

	
	
	
	printf("\n\n");

	return escuela;
}




void mostrarListaEscuela(Escuela listaEscuela[], int ordenar)
{
	int arrayTemp[numEscuelas];
	for(int i = 0; i < numEscuelas; i++)
	{
		arrayTemp[i] = i;
	}
	if(ordenar == 1)            /* 1: ordenacion ascendente  */
	{
		memcpy(arrayTemp, ordenarAscendente(listaEscuela, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
	}else if(ordenar == 2){    /* 2: ordenacion descendente */
							memcpy(arrayTemp, ordenarDescendente(listaEscuela, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
							}
	mostrarEncabezadoTabla();
	for(int i = 0; i < numEscuelas; i++)
	{
		mostrarEscuela(listaEscuela[arrayTemp[i]]);
		printf("\n");
	}
}



void buscarEscuela(Escuela listaEscuela[])
{
	int opcionBuscar;
	char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
	char claveBuscar[TAM_CLAVE];         /* Almacena la matricula a buscar dentro de la estructura             */

	printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
	printf(_TCYAN     _NEGRITA "Buscar Escuela por:\n\n");
	printf(_TBLANCO   _NEGRITA "\t1. Nombre\n");
	printf(_TBLANCO   _NEGRITA "\t2. Clave \n\n");

	printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
	scanf("%d", &opcionBuscar);

	switch(opcionBuscar)
	{
		case _xNombre:
			while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

			printf(_TCYAN _NEGRITA "\n\nIngrese el nombre de la escuela: ");
			fgets(nombreBuscar, TAM_NOM, stdin);
			strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

			for(int i = 0; i < numEscuelas; i++)
			if(strcmp(nombreBuscar, listaEscuela[i].nombre) == 0)
			{
				mostrarEncabezadoTabla();
				mostrarEscuela(listaEscuela[i]);
            }
		break;

		case _xClave:
			while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

			printf(_TCYAN _NEGRITA "\n\nIntroduce la clave: ");
			fgets(claveBuscar, TAM_CLAVE, stdin);
			strcpy(claveBuscar, strtok(claveBuscar, "\n"));

			for(int i = 0; i < numEscuelas; i++)
			if(strcmp(claveBuscar, listaEscuela[i].clave) == 0)
			{
				mostrarEncabezadoTabla();
				mostrarEscuela(listaEscuela[i]);
			}
		break;
	}
}



void actualizarEscuela(Escuela listaEscuela[])
{
	int opcionBuscar;
	char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
	char matriculaBuscar[TAM_CLAVE];         /* Almacena la matricula a buscar dentro de la estructura             */

	printf(_TCYAN     _NEGRITA "Buscar la escuela a actualizar por:\n\n");
	printf(_TBLANCO   _NEGRITA "\t1. Nombre\n");
	printf(_TBLANCO   _NEGRITA "\t2. Clave \n\n");

	printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
	scanf("%d", &opcionBuscar);

	switch(opcionBuscar)
	{
		case _xNombre:
			while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

			printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre: ");
			fgets(nombreBuscar, TAM_NOM, stdin);
			strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

			for(int i = 0; i < numEscuelas; i++)
			{
				if(strcmp(nombreBuscar, listaEscuela[i].nombre) == 0)
				{
					mostrarEncabezadoTabla();
					mostrarEscuela(listaEscuela[i]);

					printf("\n\n");

					listaEscuela[i] = crearNuevaEscuela();

					mostrarEncabezadoTabla();
					mostrarEscuela(listaEscuela[i]);

					break;
				}
			}
		break;

		case _xClave:
			while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

			printf(_TCYAN _NEGRITA "\n\nIntroduce la clave: ");
			fgets(matriculaBuscar, TAM_CLAVE, stdin);
			strcpy(matriculaBuscar, strtok(matriculaBuscar, "\n"));

			for(int i = 0; i < numEscuelas; i++)
			{
				if(strcmp(matriculaBuscar, listaEscuela[i].clave) == 0)
				{
					mostrarEncabezadoTabla();
					mostrarEscuela(listaEscuela[i]);

					printf("\n\n");

					listaEscuela[i] = crearNuevaEscuela();

					mostrarEncabezadoTabla();
					mostrarEscuela(listaEscuela[i]);

					break;
				}
			}

		break;
	}
}



void eliminarEscuela(Escuela listaEscuela[])
{
	int opcionBuscar;
	char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
	char claveBuscar[TAM_CLAVE];         /* Almacena la matricula a buscar dentro de la estructura             */

	printf(_TCYAN     _NEGRITA "Eliminar una escuela por:\n\n");
	printf(_TBLANCO   _NEGRITA "1. Nombre\n");
	printf(_TBLANCO   _NEGRITA "2. Clave \n\n");

	printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
	scanf("%d", &opcionBuscar);

	switch(opcionBuscar)
	{
		case _xNombre:
			while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

			printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre: ");
			fgets(nombreBuscar, TAM_NOM, stdin);
			strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

			for(int i = 0; i < numEscuelas; i++)
			{
				if(strcmp(nombreBuscar, listaEscuela[i].nombre) == 0)
				{
					mostrarEncabezadoTabla();
					mostrarEscuela(listaEscuela[i]);

					printf("\n\n");

					printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

					char opcionEliminar;
					while((opcionEliminar = getchar()) == 's')
					{
						printf("\nSizeof: %lu\n", sizeof(* listaEscuela));
						listaEscuela = eliminarUnaEscuela(listaEscuela, i);
					}

					printf("\n\n");
					break;
				}
			}
		break;

		case _xClave:
			while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

			printf(_TCYAN _NEGRITA "\n\nIntroduce la clave: ");
          fgets(claveBuscar, TAM_CLAVE, stdin);
          strcpy(claveBuscar, strtok(claveBuscar, "\n"));

          for(int i = 0; i < numEscuelas; i++)
          {
              if(strcmp(claveBuscar, listaEscuela[i].clave) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarEscuela(listaEscuela[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "_NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaEscuela = eliminarUnaEscuela(listaEscuela, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}



Escuela * eliminarUnaEscuela(Escuela listaEscuela[], int posicion)
{
	if(posicion < (numEscuelas - 1))
	{
		for(int j = posicion; j < numEscuelas-1; j++)
		{
			strcpy(listaEscuela[j].nombre,          listaEscuela[j+1].nombre);
			strcpy(listaEscuela[j].clave,       listaEscuela[j+1].clave);
			strcpy(listaEscuela[j].turno, listaEscuela[j+1].turno);
			listaEscuela[j].telefono     = listaEscuela[j+1].telefono;
		}
	}

	strcpy(listaEscuela[numEscuelas-1].nombre,          "");
	strcpy(listaEscuela[numEscuelas-1].clave,       "");
	strcpy(listaEscuela[numEscuelas-1].turno, "");
	listaEscuela[numEscuelas-1].telefono     = '\0';

	numEscuelas--;

	printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

	return listaEscuela;
}

