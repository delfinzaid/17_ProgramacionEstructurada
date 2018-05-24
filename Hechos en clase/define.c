/*--------------------------------------------------------------*/
/* Autor:Galdina Mendoza Hernández                              */
/* Fecha de creación:12-04-2018                                 */
/* E-mail:galdymh@gmail.com                                     */
/*Fecha de actualización: 15-04-2018                            */
/* Programa:Elabore un programa que muestre la declaración de   */
/*constantes con define,const, definir 6 macros para suma,resta */
/*mutiplicación,división,potencia,ciclos for,whle y do while.   */
/*posteriormente imprimirlos en pantalla                        */
/*--------------------------------------------------------------*/



/*Declaración de bibliotecas*/
#include<stdio.h>



/*Declaración de constates con #define*/
//no reserva espacios en memoria
#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MINIMO 0
#define MAX 100



//Declaración de constantes con define
//Implementación de macro
#define SUMA(X, Y) X+Y
#define RESTA(X, Y) X-Y
#define MULT(X, Y) X*Y
#define DIV(X, Y) X/Y
#define POTCUA(X) X*X
#define POTCUB(X) X*X*X



//Definir ciclos macros
#define CICLOFOR(x,y) for(x=0;x<y;x++)
#define WHILE(x,y) while(x<y)
#define DOWHILE(x,y); do(x++); while(x<y)



//Declaración de constatantes con cost
//reserva espacios en memoria
const float pi= 3.1416;
const float g= 9.81;
const float tamanio= 10;
const float min= 0;
const float max= 100;



/*Declaración de la función principal*/
int main(void)
{
	/*Declaración de función.*/
	int x,y=5;
	//Imprimir constantes define
	printf(" \nEL VALOR DE PI:%.4f",PI);
	printf(" \nEL VALOR DE G:%.2f",G);
	printf(" \nEL TAMAÑO::%d",TAMANIO);
	printf(" \nEL MÍNIMO:%d",MINIMO);
	printf(" \nEL MÁXIMO:%d",MAX);

	//Imprimir macro
	printf("\nOPERACIÓN SUMA:%d",SUMA(4,2));
	printf("\nOPERACIÓN RESTA:%d",RESTA(4,2));
	printf("\nOPERACIÓN MULTIPLICACÍÓN:%d",MULT(4,2));
	printf("\nOPERACIÓN DIVISÍÓN:%d",DIV(4,2));
        printf("\nPOTENCIA CUADRADA:%d",POTCUA(2));
        printf("\nPOTENCIA CUBICA:%d",POTCUB(2));

//Imprimiendo macro utilizando ciclos
        CICLOFOR(x, y)
        {printf("\nHOLA!!!");}
        WHILE(x, y)
	
        {
		printf("\n¿CÓMO ESTÁS?");
		x++;
        }
        DOWHILE(x,y);
         {printf("\nBIEN.");}

//imprimir constantes const
        printf(" \nEl valor de pi:%.4f",pi);
        printf(" \nEl valor de g:%.2f",g);
        printf(" \nEl tamaño:%.2f",tamanio);
        printf(" \nEl mínimo:%.2f",min);
        printf(" \nEl máximo:%.2f\n",max);
 //Términa la compilación de forma exitosa
        return 0; 
}

