#include <stdio.h>

/*DECLARACIÓN DE ESTRUCTURA*/
struct Alumnos
{
	int edad;
};

typedef struct
{
	char titulo[25];
}Libro;


/*PROTIPOS DE FUNCIONES*/


void imprimirMensaje(void); /*Prototipo de la función*/

/*FUNCION ESTRUCTURA SIN EL TYPEDEF*/
struct Alumnos nuevoAlumno(void);


/*FUNCION ESTRUCTURA CON EL TYPEDEF*/
Libro nuevoLibro(void);




int main(void)
{
	struct Alumnos alumnoUNSIS = nuevoAlumno();
	Libro libroliteratura = nuevoLibro();
	/*HACER LA LLAMADA A LA FUNCIÓN IMPRIMIRMENSAJE*/
	/*INVOCAR A LA FUNCIÓN IMPRIMIRMENSAJE*/
	imprimirMensaje();
	printf("La edad del alumno es: %d\n",alumnoUNSIS.edad);
	printf("El titulo de libro es: %s\n",libroliteratura.titulo);
	
	return 0;
}

void imprimirMensaje(void)
{
	printf("\nEstá en la función imprimir mensaje.\n");
}

/*FUNCION ESTRUCTURA SIN EL TYPEDEF*/
struct Alumnos nuevoAlumno(void)
{
	struct Alumnos alumno1 = {25};
	return alumno1;
}

/*FUNCION ESTRUCTURA CON EL TYPEDEF*/
Libro nuevoLibro(void)
{
	Libro libro1 = {"Cien años de soledad"};
	return libro1;
}
