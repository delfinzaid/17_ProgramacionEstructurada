/*----------------------------------------------------------------*/
/* Autor: Delfino Mendoza Vázquez								  */
/* E-mail: delacua_15@hotmail.com		                          */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/05/2018                                */
/* Descripcion: Programa principal                                */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   /* En este archivo se definen las secuencia para los colores            */
#include "enums.h"                     /* En este archivo se definen los enums para los menus                 */
#include "prototipofunciones.h"        /* En este archivo se definen todos los prototipos de funciones        */

                                       /* Los #define estan en el archivo prototipofunciones.h                */

int numEscuelas;                        /* Variable global: se define aqui en el main, pero se utiliza,        */
                                       /* manteniendo su valor en operacionesEscuela.c y ordenacion.c          */

int main(void)
{
	Escuela listaEscuela[TOTAL_ESCUELA];    /* Declaracion de una variable de arreglo de estructura Escuela[]       */
	int opcion;                          /* Variable que ontrola las opciones del menu principal.               */

	do{
		menuPrincipal();                   /* Se llama (invoca) a la funcion menuPrincipal() implementada en      */
                                       /* operacionespantalla.c                                               */

		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case CREAR:
				while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     E S C U E L A S\n\n");

				printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de Escuelas: " _TVERDE);
				scanf("%d",&numEscuelas);
				printf("\n\n" _ARESET);
	
				for(int i = 0; i < numEscuelas; i++)
				{
					while(getchar() != '\n');	/* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
					listaEscuela[i] = crearNuevaEscuela();	/* Se invoca a la funcion crearNuevoEscuela() implementada en operacionesEscuela.c  */
				}
				while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
				detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
			break;

			case LISTAR:
				while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    E S C U E L A S\n\n");
				mostrarListaEscuela(listaEscuela, 0);      /* Se invoca a la funcion mostrarEscuela() implementada en operacionesEscuela.c     */
				detenerPantalla();	/* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
			break;

			case LISTAR_ASC:
				while(getchar() != '\n');	/* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E\n\n");
				mostrarListaEscuela(listaEscuela, 1);      /* Se invoca a la funcion mostrarEscuela() implementada en operacionesEscuela.c     */
				detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
			break;

			case LISTAR_DES:
				while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    D E S C E D E N T E\n\n");
				mostrarListaEscuela(listaEscuela, 2);      /* Se invoca a la funcion mostrarEscuela() implementada en operacionesEscuela.c     */
				detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
			break;

			case BUSCAR:
				while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
				buscarEscuela(listaEscuela);               /* Se invoca a la funcion buscarEscuela() implementada en operacionesEscuela.c      */
				detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
			break;

			case ACTUALIZAR:
				while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
				actualizarEscuela(listaEscuela);	/* Se invoca a la funcion actualizarEscuela() implementada en operacionesEscuela.c  */
				while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				detenerPantalla();	/* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
			break;

			case ELIMINAR:
				while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
				printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
				eliminarEscuela(listaEscuela);	/* Se invoca a la funcion eliminarEscuela() implementada en operacionesEscuela.c    */
				detenerPantalla();	/* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
			break;

			case SALIR:
				system("clear");	/* Antes de terminar la ejecucion del programa, limpia la pantalla */
				exit(0);	/* Termina la ejecucion del programa                               */
		}
	}while(opcion != SALIR);

	return 0;
}

