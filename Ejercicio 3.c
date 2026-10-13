/*Mariana Fernanda Delgado Ramirez 
Ejercicio 3 clases
calcular promedio*/

#include <stdio.h>

void main()
{  //inicio

  //Declarar variables
  float a, b, c, d, s, p

 //leer calificaciones
 printf(" Dame la primera calificación":);
    scanf("%f", &a);
printf("Dame la segunda calificación":);
    scanf("%f", &b);
 printf("Dame la tercer calificación":);
   scanf("%f", &c);
 printf("Dame la cuarta calificación":);
   scanf("%f", &d);

//calcular la suma y el promedio
s = a+ b + c + d;
p = s/4;

//imprimir promedio
printf("El promedio es de %f. \n",p)
