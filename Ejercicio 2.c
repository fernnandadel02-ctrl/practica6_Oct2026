/*Mariana Fernanda Delgado Ramirez
Ejercicio 2 clase 
Calcula cambio a recibir*/

#include <stdio.h>

int main()
{ //inicio

  //Declarar variables
int c, t, p;

  //leer los valores de las variables
printf( "ingresar el valor total de la cuenta: ");
scanf("%i", &t);
printf("ingresar el valor del pago de la cuenta: ");
scanft("%i", &p);

//calcular el cambio de regreso 
c = t -p;

//imprimir el cambio de regreso
printf("el cambio de regreso es de $%i.\n",c);

//fin
return 0;
}
