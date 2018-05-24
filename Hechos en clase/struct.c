/*------------------------------------------------------------*/
/*Autor: Mendoza Vázquez, Delfino-----------------------------*/
/*E-MAIL: delacua_15@hotmail.com------------------------------*/
/*Fecha de creación: 12/04/18.--------------------------------*/
/*Descripción: Hacer un programa que imprima cuantas veces se-*/
/*repite un número en un vector-------------------------------*/
/*------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>
#include<string.h>




/*Declaración de colores*/
#define RESET "\x1b[0m"		/*Resetaer el color*/
#define NEGRO "\x1b[30m"	/*Color negro*/
#define ROJO "\x1b[31m"		/*Color rojo*/
#define VERDE "\x1b[32m"	/*Color verde*/
#define AMARILLO "\x1b[33m"	/*Color amarillo*/
#define AZUL "\x1b[34m"		/*Color azul*/	

#define CYAN "\x1b[36m"		/*Color cyan*/


#define NEGRITA "\x1b[1m"

/*Definición de tipos de datos estructuras*/
/*
struct nombreEsctructura
{
	miembros_de_la_estructura
}

*/


/*
struct Alumno
{
	char matricula[10];
	char curp[18];
	char nivelEstudio[30];
	char nombre[50];
	int edad;
	char sexo[1];
	char fechaNacimiento[10];
	float peso;
	float estatura;
	char tipoSangre;
	char telefono[12];
	char direccion[30];
	char alergia[20];
	char deporte[15];
	
};

*/
struct Alumno
{
	char matricula[10];
	char nombre[50];
	char sexo[1];
	float peso;
	float estatura;
	int edad;
	
	
};




/*Declaración de tamaños constantes*/




/*Declaración de la función principal*/
int main()
{
	struct Alumno edson; /*Declaración de la variable alumno*/

	/*Asignación de datos a los miembros de la estructura alumno*/



	strcpy(edson.matricula, "2017060236");
	strcpy(edson.nombre, "SANTOS ZARATE EDSON OSNART");
	edson.sexo='H';
	edson.estatura =1.60;
	edson.edad = 18;
	edson.peso = 60;	


	printf(ROJO "%s\n", edson.nombre);
	printf(AMARILLO "%s\n", edson.matricula);
	
	printf(VERDE "%f\n", edson.estatura);
	printf(AZUL "%d\n", edson.edad);
	printf(ROJO "%f\n", edson.peso);
	return 0;
} 
