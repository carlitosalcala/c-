/* Programa 2 - �ltima prueba del acceso */
#include <stdio.h>
int main()
{
  int num1;
  int num2;

  printf ("Bienvenido al programa para el c�lculo del mayor de dos n�meros. Ejercicio 2\n ");
  printf ("\nIntroduce el primer n�mero: ");
  scanf ("%i",&num1);
  printf ("\nIntroduce el segundo n�mero: ");
  scanf ("%i",&num2);
  if (num1 > num2){                             // no es necesario mirar si son iguales
    printf("El mayor de los dos n�meros es: %i",num1);
  }else{
    printf("El mayor de los dos n�meros es: %i",num2);
  }

  return 0;
}
