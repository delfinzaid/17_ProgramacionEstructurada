/*----------------------------------------------------------------*/
/* Autor: Delfino Mendoza Vázquez								  */
/* E-mail: delacua_15@hotmail.com		                          */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/05/2018                                */
/* Descripcion: implementacion de funciones que muestran datos en */
/*              pantalla.                                         */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    C O N T R O L    D E    E S C U E L A S" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Alta de escuelas");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de escuelas");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de escuelas Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de escuela Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar Escuela");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar Escuela");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar Escuela");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarEncabezadoTabla(void)
{
	printf(_TROJO     _NEGRITA);
	printf("%-40.25s|%-12s|%-18s|\tTELÉFONO\t|", "NOMBRE", "CLAVE", "TURNO");
	printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
}

void mostrarEscuela(Escuela escuela)
{
	printf(_TBLANCO _NEGRITA);
	printf("%-40.25s|%-12s|%-18s|\t%d\t|", escuela.nombre, escuela.clave, escuela.turno, escuela.telefono);
}

void detenerPantalla(void)
{
	char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
	printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
	while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
	{}
}

